/*��Ƶݹ麯��int countBinary(int n); ���ڽ��Ǹ�ʮ��������nת���ɶ�������ʽ��
�����ظö���������λ����
��ʮ������13�Ķ�������ʽΪ1101��λ��Ϊ4����ô����countBinary(13)�Ľ��Ϊ4��
���������Ҫ�� ����һ���Ǹ�����n�������õĽ���������롰13���������4����ռһ��*/
#include<stdio.h>
int countBinary(int);
int main()
{
    int n;

    scanf("%d",&n);
    printf("%d\n",countBinary(n));

    return 0 ;
}

/* ����������д�� */ 
int countBinary(int m)
{
	int p;
	
	if (m < 2){
		return 1;
	}
	else if(m%2 == 0){
		return countBinary(m/2)+1;
	}
	else{
		return countBinary(m-1);
	}
	
}
