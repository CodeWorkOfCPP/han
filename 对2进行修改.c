#include <stdio.h>
void mmm(int n, char x, char y, char z);
//��Ϊ��������
void mmm(int n, char x, char y, char z)
{
	if (n == 1)
		printf("�ƶ���ʽ::���Ϊ%d�����Ӵ�%c-<%c\n", n, x, z);
	else
	{
		mmm(n - 1, x, z, y);
		printf("�ƶ���ʽ::���Ϊ%d�����Ӵ�%c-<%c\n", n, x, z);
		mmm(n - 1, y, x, z);
	}

}

int main(void)
{
	int n;
	printf("��������һ����");
	scanf("%d", &n);
	mmm(n, 'A', 'B', 'C');
	return 0;
}
