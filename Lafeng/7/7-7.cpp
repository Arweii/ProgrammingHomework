/*���һ�������ĸ����ӣ�����1������������������)ֵ֮�͵��ڸ����������������Ϊ����ȫ����
�����������ƺ���isPerfect��printPerfect��
�жϲ���ӡ������[a,b]��1<=a<b<=20000���ڵ�������ȫ������ͳ����ȫ�����ܸ���
isPerfect����ԭ�ͣ�int isPerfect(int n);
�����ж�������n�Ƿ�Ϊ��ȫ�������ǣ��򷵻�ֵΪ1������Ϊ0 
printPerfect����ԭ�ͣ�void printPerfect(int n);
���ڴ�ӡ��һ����ȫ��n���������ӣ���ִ��printPerfect(6)ʱ����ӡЧ��Ϊ��6=1+2+3*/ 
#include <stdio.h>
#include <math.h>

//�ж�һ�����Ƿ�Ϊ��ȫ���ĺ���
int isPerfect(int);

//��ӡ��ȫ���ĺ��� 
void printPerfect(int);

int main()
{
    int i,a,b,count;

    scanf("%d%d",&a,&b);
    count = 0 ;//a,b��������ȫ������������ʼ��Ϊ0 
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //�������ȫ�� 
        {
            printPerfect(i) ;//��ӡ����ȫ�� 
            count ++ ;  //��������1 
        }        
    }
    printf("The total number is %d.\n",count);//���a,b��������ȫ�������� 
    return 0 ;
}
/* ����������д�� */
int isPerfect(int m1)
{
	int fly,ans;
	int remake = 0;
	
	for (fly = 2 ; fly*fly < m1 ; fly++)//Ϊ��ѹ��ʱ�䡭������Ҫ��ȥ������������㷨��ȻҲҪͬʱ������1 
	{
		if (m1 % fly == 0)
			remake = remake+fly+(m1/fly);
	}
	if (remake+1 == m1 && m1 != 1)
		ans = 1;
	else 
		ans = 0;
	return ans;
}
void printPerfect(int j)//��main����������perfect����ǰ����������perfact������Ȼ�����ף�����ֻҪ��perfect�Ϳ��� 
{
	int super;
	printf("%d=1",j);
	for (super = 2 ; super < j ; super++)
	{
		if (j % super == 0)
			printf("+%d",super);
	}
	printf("\n");
}
