//���ö��ֲ����㷨�����������е�����a��ǰn��Ԫ���в���ֵΪkey������Ԫ�ص��±�
#include<stdio.h>

//�������ܣ����ֲ���
//�����������ֱ�Ϊ�����ҵ����飬���鳤�ȣ������ҵ�Ԫ��
//��������ֵ������ҵ����򷵻ظ�Ԫ���������е��±꣬���򷵻�-1 
int BinarySearch(int a[],int n,int key) ; 

int main()
{
    int    num[200] ; //�������Ƚϴ��������ĵ������޷�������ô����ڴ棬���С����ԡ�
    int        n , m, i;    
    int        key ;

    scanf("%d%d",&n,&m); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;

    for( i = 0 ; i < m ; i++ ) 
    {
        scanf("%d",&key) ;
        printf("%d",BinarySearch(num,n,key)) ;
        if ( i != m - 1 ) printf(" ") ;
        else printf("\n") ;
    }
    return 0 ;
}


/* ����������д�� */
int BinarySearch(int a[],int n,int key)
{
	int middle;
	int left=0;
	int right=n-1;
	while(left <= right){
      middle = (left + right)/2;
      if (key == a[middle])
         return middle;
      else if(key < a[middle])
          right = middle - 1;
      else
          left = middle + 1;

	}
	return -1;
}






