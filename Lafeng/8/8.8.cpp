/*��д����һ��������������ĺ���
���� n ���û�����Ĳ����� n ��ֵ����0�Ҳ�����int�ķ�Χ�� 
�����ķ���ֵΪ�գ��书����������� n������������֤�����nĩβ��Ϊ0��*/
#include <stdio.h>
void reverse(int n) ; 
int main()
{
    int n;

    scanf("%d",&n);
    reverse(n);
    printf("\n");
    return 0;
}

/* ����������д�� */
void reverse(int n) 
{
	if (n/10){
		printf("%d",n%10);
		reverse(n/10);
	}
	else{
		printf("%d",n);
	}
}
