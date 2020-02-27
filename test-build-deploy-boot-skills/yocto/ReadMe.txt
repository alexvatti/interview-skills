Poky:
====

Poky is the build tool in the Yocto Project. The Yocto Project uses Poky to build images (kernel, system, and application software) for targeted hardware.


Within the Yocto Project, Poky provides an open source, full-platform build tool based on Linux, X11, Matchbox, GTK+, Pimlico, Clutter, and other GNOME Mobile technologies. It provides a focused and stable subset of OpenEmbedded upon which you can easily and reliably build and develop. Poky fully supports a wide range of x86, ARM, MIPS and PowerPC hardware and device virtualization. 


An important component integrated within Poky is Sato, a GNOME Mobile-based user interface environment. It is designed to work well with screens that use very high DPI and have restricted sizes, such as those often found on smartphones and PDAs. Because Sato is coded for speed and efficiency, it works smoothly on hand-held and other embedded hardware. It sits nicely on top of any device that uses the GNOME Mobile stack and it results in a well-defined user experience.


BitBake:
======
BitBake handles the parsing and execution of the data files. The data itself is of various types:

    Recipes: Provides details about particular pieces of software

    Class Data: An abstraction of common build information (e.g. how to build a Linux kernel).

    Configuration Data: Defines machine-specific settings, policy decisions, etc. Configuration data acts a the glue to bind everything together.

BitBake knows how to combine multiple data sources together and refers to each data source as a 'layer'. 


BitBake is the tool at the heart of Poky and is responsible for parsing the metadata, generating a list of tasks from it and then executing them. To see a list of the options BitBake supports look at 'bitbake --help'. 

The most common usage for BitBake is bitbake <packagename>, where packagename is the name of the package you want to build (referred to as the 'target' in this manual).

PREFERRED_PROVIDER_
PREFERRED_VERSION_

BitBake also tries to execute any dependent tasks first


Metadata (Recipes)
==================

The .bb files are usually referred to as 'recipes'. In general, a recipe contains information about a single piece of software such as from where to download the source patches (if any are needed), which special configuration options to apply, how to compile the source files, and how to package the compiled output. 

Classes
========

Class files (.bbclass) contain information that is useful to share between metadata files. An example is the autotools class, which contains common settings for any application that autotools uses.

Configuration
=============

The configuration files (.conf) define various configuration variables that govern what Poky does. These files are split into several areas that define machine configuration options, distribution configuration options, compiler tuning options, general common configuration options and user configuration options (local.conf). 


Running a Build
===============

First the Poky build environment needs to be set up using the following command:

     $ source poky-init-build-env [build_dir]


meta/recipes-core/images
├── core-image-base.bb
├── core-image-minimal.bb

The target is the name of the recipe you want to build. Common targets are the images in meta/recipes-core/images, /meta/recipes-sato/images


Installing and Using the Result
===============================

Once an image has been built it often needs to be installed. The images/kernels built by Poky are placed in the tmp/deploy/images directory. 


Task Failures
=============

The log file for shell tasks is available in ${WORKDIR}/temp/log.do_taskname.pid. For example, the "compile" task of busybox 1.01 on the ARM spitz machine might be tmp/work/armv5te-poky-linux-gnueabi/busybox-1.01/temp/log.do_compile.1234. To see what BitBake runs to generate that log, look at the corresponding run.do_taskname.pid file located in the same directory. 

Running Specific Tasks
======================

Any given package consists of a set of tasks. In most cases the series is: fetch, unpack, patch, configure, compile, install, package, package_write and build. The default task is "build" and any tasks on which it depends build first - hence, the standard BitBake behaviour. Some tasks exist, such as devshell, that are not part of the default build chain. If you wish to run a task that is not part of the default build chain you can use the "-c" option in BitBake as follows:

     $ bitbake matchbox-desktop -c devshell

 You can view a list of tasks in a given package by running the "listtasks" task. For example:

     $ bitbake matchbox-desktop -c
            

The results are in the file ${WORKDIR}/temp/log.do_listtasks. 


Dependency Graphs
================

Sometimes it can be hard to see why BitBake wants to build some other packages before a given package you've specified. The bitbake -g targetname command creates the depends.dot and task-depends.dot files in the current directory. These files show the package and task dependencies and are useful for debugging problems. You can use the bitbake -g -u depexp targetname command to display the results in a more human-readable form


Adding a Package
================

To add a package into Poky you need to write a recipe for it. Writing a recipe means creating a .bb file that sets some variables. For information on variables that are useful for recipes and for information about recipe naming issues, see the Recipe Variables - Required appendix.

Before writing a recipe from scratch it is often useful to check whether someone else has written one already. OpenEmbedded is a good place to look as it has a wider scope and range of packages. Because Poky aims to be compatible with OpenEmbedded, most recipes should simply work in Poky.

For new packages, the simplest way to add a recipe is to base it on a similar pre-existing recipe. Following are some examples showing how to add standard types of packages: 


Single .c File Package (Hello World!)
=====================================

Building an application from a single file that is stored locally (e.g. under files/) requires a recipe that has the file listed in the SRC_URI variable. Additionally, you need to manually write the "do_compile" and "do_install" tasks. The S variable defines the directory containing the source code, which is set to WORKDIR in this case - the directory BitBake uses for the build. 

S

    Path to unpacked sources (by default: "${WORKDIR}/${PN}-${PV}") 


Adding the Machine Configuration File
=====================================

To add a machine configuration you need to add a .conf file with details of the device being added to the conf/machine/ file. The name of the file determines the name Poky uses to reference the new machine.

The most important variables to set in this file are TARGET_ARCH (e.g. "arm"), PREFERRED_PROVIDER_virtual/kernel (see below) and MACHINE_FEATURES (e.g. "kernel26 apm screen wifi"). You might also need other variables like SERIAL_CONSOLE (e.g. "115200 ttyS0"), KERNEL_IMAGETYPE (e.g. "zImage") and IMAGE_FSTYPES (e.g. "tar.gz jffs2"). You can find full details on these variables in the reference section. You can leverage many existing machine .conf files from meta/conf/machine/. 


Adding a Kernel for the Machine
===============================

Poky needs to be able to build a kernel for the machine. You need to either create a new kernel recipe for this machine, or extend an existing recipe. You can find several kernel examples in the meta/recipes-kernel/linux directory that can be used as references.

If you are creating a new recipe, the "normal" recipe-writing rules apply for setting up a SRC_URI. This means specifying any necessary patches and setting S to point at the source code. You need to create a "configure" task that configures the unpacked kernel with a defconfig. You can do this by using a make defconfig command or more commonly by copying in a suitable defconfig file and and then running make oldconfig. By making use of "inherit kernel" and potentially some of the linux-*.inc files, most other functionality is centralized and the the defaults of the class normally work well.

If you are extending an existing kernel, it is usually a matter of adding a suitable defconfig file. The file needs to be added into a location similar to defconfig files used for other machines in a given kernel. A possible way to do this is by listing the file in the SRC_URI and adding the machine to the expression in COMPATIBLE_MACHINE: 

            

        





