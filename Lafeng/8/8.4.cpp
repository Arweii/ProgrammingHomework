/*���������Ҫ�� ����һ������n����������������䳤�Ȳ�����10�����ת�����ʮ��������ռһ��*/
#include<stdio.h>

int convert(int n);

int main()
{
    int n ;

    scanf("%d",&n);
    printf("%d\n",convert(n));
    return 0 ;    
}

/* ����������д�� */ 
int convert(int n)
{
	if (n/10 == 0){
		return n;
	}
	else{
			return 2*convert(n/10)+(n%10);
	}
 } 
