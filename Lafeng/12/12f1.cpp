#include<stdio.h>

//���ַ���str�е����ݷ����ӡ�ĺ��� 
void reversePrint(char str[]) ;

int main()
{
    char    s[100] ;

    scanf( "%s" , s );    
    reversePrint(s) ;
    printf("\n") ;

    return 0;
}

/* ����������д�� */
void reversePrint(char str[])
{
	if (str[0]!='\0'){
		reversePrint(&str[1]);
	}
	else return;
	printf("%c",str[0]);
} 
