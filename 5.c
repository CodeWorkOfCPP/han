#include<iostream>
#include<string>
using namespace std;

class fadian
{
public:
	fadian(int n, int x, string m) :fanjian(n), caidan(x), boss(m)
	{
		fanjian = n;
		caidan = x;
		boss = m;
	}
	void display();
	void pandaun(int jj);
	void maiyi(int jjj);
private:
	int fanjian;
	int caidan;
	string boss;
};
void fadian::display()
{
	cout << "��ӭ�����ó�ʳ��";
	cout << "������ϰ���:" << boss;
	return;
}
void fadian::pandaun(int jj)
{
	if (jj < 4)
	{
		fanjian = 5;
		caidan = 6;
	}
	if (jj > 4)
	{
		fanjian = 8;
		caidan = 11;
	}
	cout << "�Ƽ��������:" << fanjian;
	cout << "�Ƽ����ϲ�������:" << caidan;
}
void fadian::maiyi(int jjj)
{
	if (jjj = 1)
		cout << "�Ա��������Ŷ";
	else
		cout << "�Ա��겻����Ŷ";

}
int main(void)
{
	fadian k(10, 19, "daoxiaoma");
	k.display();
	k.pandaun(5);
	k.maiyi(1);

	return 0;
}
