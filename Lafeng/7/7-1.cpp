/*��֪�ֶκ�������x<1ʱ��y=x����1<=x<=10ʱ��y=2x-1��
��10< x <=100ʱ��y=3x-11����x>100ʱ��y=x*x-24
��ƺ���int fun(int x)�����ݷֶκ�������yֵ
����Ϊһ������x,���Ա���x�����Ϊ����ֵy�Ľ��*/
#include<stdio.h>

int fun(int);

int main()
{
    int x;

    scanf("%d",&x);
    printf("The result is:y=%d\n",fun(x)) ;

    return 0 ;    
}

/* ����������д�� */
int fun (int a)
{
	int ans;
	if (a<1) 
		ans = a;
	else if ((a>=1)&&(a<=10)) 
		ans = 2*a-1;
	else if ((a>10) && (a<=100)) 
		ans = 3*a-11;
	else 
		ans = a*a-24;
	return ans;
 } 
