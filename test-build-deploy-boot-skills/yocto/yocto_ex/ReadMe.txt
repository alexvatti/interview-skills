https://hub.mender.io/t/how-to-create-custom-images-using-yocto-project/902

Scope

For the sake of this tutorial lets set a couple of requirements that we want to accomplish on our target device.

We want to create two custom images:

    one for development (unsecure!)
    one for production

On the production image we would like to have the following packages installed:

    inotify-tools

    inotify-tools is a C library and a set of command-line programs for Linux providing a simple interface to inotify. These programs can be used to monitor and act upon filesystem events

Additionally the development image should have the following features/packages:

    SSH server running on the device
    gdb, gdbserver and strace installed on the device
    evtest, i2c-tools, ethtool, fbset, memtester
    -- these are all applications useful during testing debugging various parts of the system


If you are interested in getting a list of available packages in your current environment you can run:
bitbake-layers show-recipes
