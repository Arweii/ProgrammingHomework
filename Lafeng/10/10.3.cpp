//�ú���ʹ�ò��������㷨��������a��ǰn��Ԫ�ذ�������ķ�ʽ����

#include<stdio.h>

//������������ 
//����˵�������飬����������Ԫ�ظ��� 
void InsertSort(int a[],int n);

int main()
{
    int n , i, num[1000] ;

    scanf( "%d" , &n ); 
    for( i = 0 ; i < n ; i++ ) 
        scanf( "%d", &num[i] ) ;
    InsertSort( num , n ) ; 
    return 0 ;
}

/* ����������д�� */ 
void InsertSort(int a[],int n)
{
	int i,p;
	for (i=1;i<n;i++){
		for (p=0;p<i;p++){
			if (a[i]<a[p]){
				int save=a[i];
				for (int _=i-1;_>=p;_--){
					a[_+1]=a[_];
				}
				a[p]=save;
				break;
			}
		}
		for (int w=0;w<n-1;w++){
				printf("%d ",a[w]);
			}
			printf("%d\n",a[n-1]);
	}
}
