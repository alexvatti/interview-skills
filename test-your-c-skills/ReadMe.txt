Frequently asked "c" language interview questions:
==================================================

1. Implement function: taking two int arguments,return true if they have different sign

2. Two/double dimensional array allocaiton[dynamic] using malloc - dynamic

3. iterative vs recurssion - factorial of given number

4. quicksort - implementation & explain

5. Given system is little endian or big endian?

6. bit wise operations - set ,clear , toggle a given bit

7. difference/substraction without "-"[minus] operator of given two variables

8. container_of implemenataion - container_of(ptr,struct abc , name)

9. calling the function using function pointer

10. function arguement as function pointer

11. function return address of another function address

12.function pointer array and storing/assigning the address of function,invoke based on input

13. void pointer, and type casting to different data tpes (int,char,float etc) , print the value

14. void pointer holding the address of function: how to call the function,using void pointer

15. variable number of arguments

16. variable number of arguments --function pointer as arguments

17. string reverse without using the temp string

18. *ptr++,(*ptr)++,++*ptr difference

19. print a given number in charater string: 123 => one hundered twenty three

20. a given string ...every char need to rotate with offset(given), if it cross(z/Z), in wrap it

21. compiler error: type cast: float to char: compilation error

22.

23.what is the output ?
       char *name="WIPRO";
       sizeof(*name) = ?  (Ans :1)
       sizeof("WIPRO")= ? (Ans :6 )
       sizeof(name)= ?    (Ans :8 )

24.  confusing question: assign the global variable to local variable of same name(during the defination of local var) : output: 0
	int var =100;
	int main(){
	int var=var;
	printf("local val=%d\n",var);
	}

25.  compiler error: we have the following code:
	#include<stdio.h>
	int a=100;
	int b=a;
	int main()
	{
	   printf("value a = %d\n",a);
	   printf("value b = %d\n",b);
	}

26. output of following
void fun();

int main()
{
	fun();
}
void fun()
{
	union abc {
		short int a;
		char b;
	}var;

	var.a=0xffff;
	var.b=0x55;

	printf("value of a=%x\n", var.a);
	printf("value of b=%x\n", var.b);
return;
}

27. number conversion: from decimal to hexa, decimal to oct,decimal to binary

28. what is the output? 
int main()
{
	unsigned int r;
	for(r=1;r>-4;r++)
		printf("welcome");
	return 0;
}

29. sum of digits of given number : use recursive fun


30. implement : my prints similar function of printf


31. function(start,end) to be called before and after main function


32. multiplication of two number , without using '*' operator
