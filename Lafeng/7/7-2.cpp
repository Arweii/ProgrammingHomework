/*��ƺ���int getDays(int year,int month)�����ݸ�������year���·�month,������µ����������ء�
��ʾ��ע��������жϡ�
���������Ҫ�� ������������y,m����������·�
��������ڸ��µ�������ռһ�С� ����������֤����Ϸ�*/ 
#include<stdio.h>

int getDays(int y,int m) ;

int main()
{
    int year, month ;

    scanf("%d%d",&year,&month);
    printf("There are %d days in month %d year %d.",getDays(year,month), month, year) ;

    return 0 ;    
}

/* ����������д�� */ 
int getDays(int y,int m)
{
	int ans;
	int isLeapyear = 0;
	
	if ((y%4 == 0 && y%100 != 0) || (y%400 == 0))
		isLeapyear = 1;
	
	if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12))
		ans = 31;
	else if ((m == 4) || (m == 6) || (m == 8) ||  (m == 9) || (m == 11))
		ans = 30;
	else 
		ans = 28+isLeapyear;
	return ans;
}
