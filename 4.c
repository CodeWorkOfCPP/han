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
{//��ʼ��ͷ�ڵ�
	note *k = new note;
	k->data = 10;
	note *kk = k;
	k->next = NULL;
	k->prior = NULL;
	cout << "����������Ҫ�Ľڵ���";
	int n;
	cin >> n;//����������һ��һ��������ͬ����Ҫʵ������ָ��
	for (int j = 1; j <= n; j++)
	{
		note *kkk = new note;
		kkk->data = j + 1;
		kk->next = kkk;
		kkk->prior = kk
			kk = kkk;

	}
	kkk->next = NULL��
		return k;
};
void deletee(note*l)//˫�������ɾ�����ô��³���������ǰ����Ϊ��ָ����ǰһ���ĵ�ַ�����ԱȽϷ���
{
	note *ll = l;
	cout << "��������Ҫɾ���Ľڵ�λ��";
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
{//�ҵ���һ��λ�ú���в���
	cout << "����������Ҫ����Ľڵ��λ��";
	int j;
	cin >> j;
	note *mmm = mm;
	for (int i = 1; i < j; i++)
	{
		mmm = mmm->next;
	}
	//������в������
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

