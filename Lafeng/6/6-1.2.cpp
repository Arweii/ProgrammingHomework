#include <stdio.h>
int maxi(int a, int b)//�����Լ��
{
	int t;
	if (a<b)
	{
		t = a;
		a = b;
		b = t;
	}
	//debugС��ʾ�����������t�Ļ�ʵ�����������˵ģ��͸����������������λ��Ҫ������һ���� 
	while (a%b)
	{
		t = a%b;
		a = b;
		b = t;
	}
	return b;
} 
int mini (int c, int d)
{
	int max,min;
	max = maxi(c,d);
	min = c/max*d;//debugС��ʾ��������ȳ��ٳ��ǹ����˵�5���ģ���Ϊc*d�����ǽ������һ��������int�洢Ŷ 
	return min;
}
int main()
{
	int m,n;
	int ansmax,ansmin;
	
	scanf("%d%d",&m,&n);
	ansmax = maxi(m,n);
	ansmin = mini(m,n);
	printf("%d %d",ansmax,ansmin);
	return 0;
}
