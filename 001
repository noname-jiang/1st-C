//利用栈实现十进制转换八进制
//【问题描述】对于输入的任意一个非负十进制整数，打印输出与其等值的八进制数
//【输入形式】非负十进制整数
//【输出形式】相应十进制整数转换后的八进制正整数，若输入不符合要求，提示错误，重新输入
//【样例输入】5548        【样例输出】12654
//【样例说明】先判断输入是否符合非负正整数要
#include<stdio.h>
#define MAXSIZE 99
typedef int Status;
typedef struct
{
	int* base;
	int* top;
	int stacksize;
}SqStack;


Status InitStack(SqStack &S)
{
	S.base = new int[MAXSIZE];
	if (!S.base)  return 0;
	S.top = S.base;
	S.stacksize = MAXSIZE;
	return 1;
}

Status Push(SqStack &S,int e)
{
	if (S.top - S.base == S.stacksize) return 0;
	*S.top++ = e;
	return 1;
}

Status Pop(SqStack &S,int &e)
{
	if (S.top == S.base) return 0;
	e = *--S.top;
	return 1;
}

Status conversion(int N)
{
	int e = 0;
	SqStack S;
	InitStack(S);
	while (N)
	{
		Push(S, N % 8);
		N = N / 8;
		printf_s("%d,", N);
	}
	printf_s("输出八进制的数：");
	while (S.top != S.base)
	{
		Pop(S,e);
		printf_s("%d",e);
	}
	return 0;
}

int main()
{
	int D;
	printf_s("输入一个十进制的数：");
	scanf_s("%d", &D);
	if (D > 0)
	{
		conversion(D);
	}
	else
		printf_s("ERROR\n");
}
