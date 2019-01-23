#include <stdio.h>
void mmm(int n, char x, char y, char z);
//分为三个步骤
void mmm(int n, char x, char y, char z)
{
	if (n == 1)
		printf("移动方式::编号为%d的盘子从%c-<%c\n", n, x, z);
	else
	{
		mmm(n - 1, x, z, y);
		printf("移动方式::编号为%d的盘子从%c-<%c\n", n, x, z);
		mmm(n - 1, y, x, z);
	}

}

int main(void)
{
	int n;
	printf("请你输入一个数");
	scanf("%d", &n);
	mmm(n, 'A', 'B', 'C');
	return 0;
}
