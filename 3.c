#include<iostream>
//����Ϊ�ĵ������ѭ�������
//#include <stdlib.h>
using namespace std;
typedef struct NOTE
{
	int data;
	struct NOTE*next;
}note;
note* sutup();
//����ͷ�ڵ�;
note* suttup(note *p, int n);
//��������
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
	return p;//βָ��
}
void  jie(note *l, note *ll)
{
	ll->next = l;
}//ʵ��ѭ������Ĳ���

int main(void)
{
	note *mm = NULL;
	mm = sutup();
	mm->next = NULL;
	cout << "��������ڵ����Ŀ"��
		int n;
	cin >> n;
	note *mmm = suttup(mm, n);
	jie(mm, mmm);
	cout << "��������Ҫɾ��������";
	int bb;
	cin >> bb;
	shangchu(mm, bb);
	cout << "�������е����ֽ��д�ӡ";
	note *mmmm = mm;
	do
	{
		cout << mm->data;
		mm = mm->next;
	} while (mmmm != mm)
		return 0;

}