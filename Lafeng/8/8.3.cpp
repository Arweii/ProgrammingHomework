/*дһ���������Զ���n��0<n<100�����������������n�������е����ֵ
����Ҫ��ݹ����*/
#include <stdio.h>

int findMax(int n) ;

int main()
{   
    int n ; 

    scanf("%d", &n); 
    printf("%d\n" , findMax( n ) ) ; 

    return 0;
}

/* ����������д�� */
int findMax(int n)
{
	int num,b;
	
	if (n){
		scanf("%d",&num);
		b = findMax(n-1);//�����������b��ָ������ֱ����findMax�׽�if�����Ļ���ʲô�����û�� 
		if(num > b){
			return num;
		}
		else{
			return b;
		}
	} 
	else{
		return 0; //���������1С����Ӧ�ö��� 
	}
}
