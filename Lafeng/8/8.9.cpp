/*��Ƶݹ麯��void void printFactor( int, int );��ӡ����n���������ֽ�Ľ��
��Ƴ�����֪һ�����ݷ�Χ[a,b]����a<=b��Ҫ������е�ÿһ�������������ֽ�
��Ҳ������������������������ж������ĺ���isPrime(n)
���������Ҫ�� ��������������a��b���������ֽ�����䣬����1<=a<=b<=100000��
��b-a<=100�����b-a+1�У���b-a+1�����ķֽ�
�ֽ�������ʽ100=2*2*5*5*/
#include<stdio.h>

void printFactor( int, int ); 

int main()
{
    int a,b,i ;

    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;  //�����棬���ﱾ������һ��i���㹻�ˣ�Ϊʲô�����ﻹ��һ��1��  

    return 0;
}

/* ����������д�� */
void printFactor( int a, int b)
{
	int i;
	 
	if(b == 1 ){
		printf("%d=",a);
	}
	if(a == 1){
		printf("1\n");
		return;
	}
	for (i = (b==1)?2:b ; i<=a ; i++){//ʵ���Ͼ��Ǵ�С����������������һ���ʹ���㾡������ 
		if(a%i==0){
			printf("%d",i);
			if (a != i){
				printf("*");
				printFactor(a/i,i);
			}
			break;
		}
		
	}
	if (a == i){
		printf("\n");
	}
}

