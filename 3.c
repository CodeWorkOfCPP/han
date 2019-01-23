#include<iostream>
//我认为的单链表和循环链表的
//#include <stdlib.h>
using namespace std;
typedef struct NOTE
{
	int data;
	struct NOTE*next;
}note;
note* sutup();
//建立头节点;
note* suttup(note *p, int n);
//建立表身
void jie(note *l, note *ll);
void shangchu(note *d, int n)
{
	note *ddd;
	ddd = d
		note *dddd = d;
	do
	{
		if (d->data == n)
		{
			while (ddd->next != d)
				ddd = ddd->next;
			ddd->next = d->next;
			delete(d);
		}
		else
			d = d->next;
	} while (dddd != d)

}
note * sutup()
{
	note *m = new note;
	m->data = 5;
	m->next = NULL;
	return m;
}


note *suttup(note *p, int n)
{
	note *kk;
	for (int i = 1; i <= n; i++)
	{
		kk = new note;
		kk->data = i + 1;
		p - next = kk;
		kk->next = NULL;
		p = kk;
	}
	return p;//尾指针
}
void  jie(note *l, note *ll)
{
	ll->next = l;
}//实现循环链表的操作

int main(void)
{
	note *mm = NULL;
	mm = sutup();
	mm->next = NULL;
	cout << "请你输入节点的数目"；
		int n;
	cin >> n;
	note *mmm = suttup(mm, n);
	jie(mm, mmm);
	cout << "请你输入要删除的数字";
	int bb;
	cin >> bb;
	shangchu(mm, bb);
	cout << "将链表中的数字进行打印";
	note *mmmm = mm;
	do
	{
		cout << mm->data;
		mm = mm->next;
	} while (mmmm != mm)
		return 0;

}