/*��ƺ���int reverseNum(int n)������������n��ת�����ʽ����reverseNum(12345)��ֵΪ54321
���������Ҫ�� ����һ��������n��n��ȡֵ��Χ���ᳬ��int���ͱ�����n������ǰ��0��n�Ľ�βҲ������0
������������ķ�ת��ʽ������硰The reverse form of number 12345 is 54321.����ռһ��*/
#include<stdio.h>

int reverseNum(int p) ; 

int main()
{
    int num ;

    scanf("%d",&num);
    printf("The reverse form of number %d is %d.\n",num,reverseNum(num)) ;

    return 0;
}

/* ����������д�� */
int reverseNum(int p)//���ڸ��ϴ���ҵһ������¡��� 
{
	int remake = 0;
	int i;
	
	while (p)
	{
		i = p%10;
		remake = remake*10+i;
		p /=10;
	}
	return remake;
}

