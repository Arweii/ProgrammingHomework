/*��ƺ���int getDigit(long long n)�����㲢����������n�ĳ���
 ����һ��������n��n��ȡֵ��Χ���ᳬ��long long���ͱ������������������λ��
 ע�ⵥ��digits�ĵ�������ʽ��*/
#include<stdio.h>

int getDigit(long long n); 

int main()
{
    long long n ;
    int len ;

    scanf("%lld",&n);
    len = getDigit(n) ;
    if (len > 1)
        printf("The integer %lld has %d digits.\n",n, len) ;
    else
        printf("The integer %lld has %d digit.\n",n, 1) ;
    return 0 ;    
}

/* ����������д�� */ 
int getDigit(long long n)
{
	int ans = 0;
	
	while (n)
	{
		ans ++;
		n /= 10;
	}
	return ans;
}
