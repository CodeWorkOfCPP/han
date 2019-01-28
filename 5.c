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
	cout << "欢迎来到好吃食堂";
	cout << "本店的老板是:" << boss;
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
	cout << "推荐房间号是:" << fanjian;
	cout << "推荐的上菜数量是:" << caidan;
}
void fadian::maiyi(int jjj)
{
	if (jjj = 1)
		cout << "对本店很满意哦";
	else
		cout << "对本店不满意哦";

}
int main(void)
{
	fadian k(10, 19, "daoxiaoma");
	k.display();
	k.pandaun(5);
	k.maiyi(1);

	return 0;
}
