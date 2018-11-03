#include<stdio.h>
int add(int a, int b);

int main(int argc, char*argv)
{

	int a=100;
	int b=20;
	int result temp = add(a, b);
	return 0;
}

int add(int a, int b)
{
	return a+b;
}

