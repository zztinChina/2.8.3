
#include<stdio.h>
int main()
{
	double count = 0.0;
	double n = 100.0;
	int i = 0;
	scanf_s("%d", &i);//����ڼ������
	double h = 0.5;
	int p = 1;
	for (p = 1; p <= i; p++)//��i����غ��ܷ����ܷ��������ף�
	{
		n = h * n;
		
	}
	double q = 100.0;
	int s = 0;
	for (s = 1; s < i; s++)
	{
		q = q * h;
		count = count + q * 2.0;

	}
	count = count + 100.0;
		if (i == 1)
	{
		printf("��һ������˶���100��\n");
		printf("�ܷ���50��");
	}
	else
	{
		
		printf("��%d������˶��ˣ�%lf��\n", i, count);
		printf("��%d����غ��ܷ���%lf��\n", i, n);
	}
	return 0;
}