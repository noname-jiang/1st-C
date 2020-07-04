//【问题描述】输入一个单向链表，输出该链表中倒数第k个结点，链表的最后一个结点是倒数第1个节点。
//【输入形式】输入第一位为K值，其后接一串以空格分隔的整型值。
//【输出形式】输出为倒数第K个结点的值，若无，则输出Not Found
//【样例输入】3 13 45 54 32 1 4 98 2
//【样例输出】4
//【样例说明】K值为3，则输出链表倒数第3个结点的值，为4；数据输入间以空格隔开
//【评分标准】本题要综合输出正确性及使用的数据结构。需由输入数据构建单链表。不使用链表的将不得分。

#include <iostream>
using namespace std;

#define OK 1
#define ERROR 0
typedef int ElemType;
typedef struct LNode
{
	int date;
	struct LNode* next;
}LNode, * LinkList;

LNode *p,*sp[99];


int InitList(LinkList& L)
{
	L = new LNode;
	L->next = NULL;
	return OK;
}

int CreateList(LinkList& L)
{
	int t;
	L = new LNode;
	L->next = NULL;
	while(scanf_s("%d",&t)!=EOF)//读取到文件的结尾停止
	{
		p = new LNode;
		p->date = t;
		p->next = L->next;
		L->next = p;
	}
	return OK;
}

int GetElem(LinkList L, int i, char& e)
{
	int j;	
	p = L->next;
	j = 0;
	while (p)
	{
		sp[j++] = p;
		p = p->next;
	}
	if (i<1||j < i) return ERROR;
	e = sp[i-1]->date;
	return OK;
}

int main()
{
	int K;
	char num;
	LinkList L;
	scanf_s("%d", &K);
	InitList(L);
	CreateList(L);
	if (GetElem(L, K, num))
		printf_s("%c", num);
	else
		printf_s("Not Found");
}
