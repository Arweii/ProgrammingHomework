/*�������У� s = 1 + a + a^2+��+ a^(n+1)
����a>0,n>0���Ҿ�Ϊ������ ����������֤��������������int�洢�� ��д���ݹ���s�ĺ���*/
#include <stdio.h>

int evaluation(int n,int a) ;
int main()
{
    int n,a; 

    scanf("%d%d",&n,&a);       
    printf("%d\n",evaluation(n,a));
 	return 0;
}

/* ����������д�� */
int evaluation(int n,int a)
{
	if (n==0){
		return 1+a;
	}
	else{
		int i;
		int sum=1;
		for(i=1;i<=n+1;i++){
			sum *= a;
		}
		return evaluation(n-1,a)+sum;
	}
}
