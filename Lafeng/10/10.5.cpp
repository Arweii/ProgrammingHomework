//ʹ��ѡ�������㷨������a��ǰn��Ԫ�ذ�������ķ�ʽ����
#include<stdio.h>
//ѡ���������� 
//����˵�������飬����������Ԫ�ظ��� 
void selectSort(int data[],int elementCount) ;
//�������ܣ��������е���СֵԪ�أ����������±� 
//����˵������������������ʼλ���±꣬������ֹλ���±�
int findMin(int data[], int startLoc, int endLoc) ; 
//�������������Ԫ�� 
//����˵�������飬����������Ԫ�ظ��� 
void outputData(int data[],int elementCount) ;
int main()
{
    int n,i,num[1010];

    scanf("%d",&n); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
    selectSort(num,n) ; 
    return 0 ;
}

/* ����������д�� */
void selectSort(int a[],int n)
{
	for (int i=0;i<n-1;i++){
		int min=i;
		int trans;
		for (int p=i+1;p<n;p++){
			if(a[p]<a[min]){
				min=p;	
			}
		}
		trans=a[min];
		a[min]=a[i];
		a[i]=trans;
        for (int m=0;m<n-1;m++){
            printf("%d ",a[m]);
        }
        printf("%d\n",a[n-1]);
	}
}







