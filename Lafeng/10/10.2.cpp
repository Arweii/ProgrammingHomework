//����ӵ���Ϊ����������೤��Ҫһ�š�Ȼ��ÿ��սʿ��ͬʱ���Լ����е��ӵ���һ�����һ��սʿ
//���һ��սʿ�����е��ӵ���һ�����1��սʿ
#include<stdio.h>

#define LEN 100

//�������� 
void distribute(int * bullets,int size,int number) ;

int main()
{
    int bullets[LEN] ;
    int n,m,i;    

    scanf("%d" , &n ) ;    //����սʿ���� 
    for( i = 0 ; i < n ; i++ )
    {
        scanf("%d" , &bullets[i] ) ;//����ÿ��սʿ���г�ʼ���ӵ��� 
    }
    scanf("%d",&m ) ;//��������Ĵ�����m>0) 
    distribute(bullets,n,m ) ;//���� 
    for( i = 0 ; i < n - 1 ; i++ )//����������� 
    {
        printf("%d " , bullets[i] ) ;
    }
    printf("%d\n" , bullets[i] ) ;

    return 0;    
}


/* ����������д�� */
void distribute(int * bullets,int size,int number)//���ͬʱ�ͺ����ԣ����������ĵ�һ������13���Ͳ���ͬʱ�� 
{
	for (int p=0;p<number;p++){
		for (int i=0;i<size;i++){
			if (bullets[i]%2){
				bullets[i] += 1; 
		}
		bullets[i]/=2;
		}
		int save[size];
		for (int i=1;i<size;i++){
			save[i]=bullets[i-1]+bullets[i];
		}
		save[0]=bullets[0]+bullets[size-1];
		for (int m=0;m<size;m++){
			bullets[m]=save[m];
		}
	}
}

