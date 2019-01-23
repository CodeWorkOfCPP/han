#include<iostream>
#include<stdio.h>
using namespace std;
typedef struct NOTE
{
	int data;
	struct NOTE *prior;
	struct NOTE *next;

}note;
note *setup();
void shangchu(note *m, int j);
void printt(note *mm);
note *setup()
{//初始化头节点
	note *k = new note;
	k->data = 10;
	note *kk = k;
	k->next = NULL;
	k->prior = NULL;
	cout << "请你输入想要的节点数";
	int n;
	cin >> n;//像单链表那样一节一节来，不同的是要实现两个指针
	for (int j = 1; j <= n; j++)
	{
		note *kkk = new note;
		kkk->data = j + 1;
		kk->next = kkk;
		kkk->prior = kk
			kk = kkk;

	}
	kkk->next = NULL；
		return k;
};
void deletee(note*l)//双向链表的删除不用从新出发找他的前身，以为后指针是前一个的地址，所以比较方便
{
	note *ll = l;
	cout << "请你输入要删除的节点位置";
	int k, l;
	cin >> k;
	for (l = 1; l < k; l++)
	{

		ll = ll->next;
	}
	ll->prior->next = ll->next;
	ll->next->prior = ll->prior;
}
void charui(note *mm)
{//找到那一个位置后进行插入
	cout << "请你输入想要插入的节点的位置";
	int j;
	cin >> j;
	note *mmm = mm;
	for (int i = 1; i < j; i++)
	{
		mmm = mmm->next;
	}
	//下面进行插入操作
	note *mmmm = mmm->next;
	note *kkk = new note;
	mmm->next = kkk;
	kkk->prior = mmm;
	kkk->next = mmmm;
	mmmm->prior = kkk;
}

void printt(note *sss)
{
	while (sss->next != NULL)

	{
		cout << sss->data;
		sss = sss->next;
	}

}
int main(void)
{
	note *lll = setup();
	deletee(lll);
	charui(lll);
	printt(lll);
	return 0;

}

