/*��ƺ���int mypow(int x,int n)������������x��n���ݣ���mypow(2,10)ֵΪ1024
���������Ҫ�� ���������Ǹ�����x����n��x��n���ݲ��ᳬ��int�ͷ�Χ�������������ռһ��*/
#include<stdio.h>

int mypow(int m, int t) ;

int main()
{
    int x, n ;

    scanf("%d%d",&x,&n) ;
    printf("%d\n",mypow(x,n)) ;

    return 0;
}

/* ����������д�� */
int mypow(int m,int t)
{
	
	if (t == 0)
		m = 1;
	else
	{
		int i,m0;
		m0 = m;
		for(i = 1;i < t;i++)
		{
			m *= m0;
		}
	}
	return m;
}
