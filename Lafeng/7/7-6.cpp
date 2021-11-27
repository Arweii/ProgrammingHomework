/*��ƺ���int judgeTriangle(int a,int b,int c)���ж�a��b��c�����Ƿ��ܹ��������Σ�
����ܣ���ô��һ���ж����������������Σ��ȱߡ�������ֱ�ǡ������������Σ� 
�����a��b��cû��˳��֮�֡� ��a��b��c���߲��ܹ���������ʱ������-1��
��a��b��c���߹��ɲ�����������ʱ������0����a��b��c���߹���ֱ��������ʱ������1��
��a��b��c���߹��ɵ���������ʱ������2����a��b��c���߹��ɵȱ�������ʱ������3*/ 
#include<stdio.h>

int judgeTriangle(int x,int y,int z) ; 

int main()
{
    int a,b,c;    

    scanf("%d%d%d",&a,&b,&c);

    switch(judgeTriangle(a,b,c))
    {
        case    -1    :    printf("It is not a triangle.\n") ;    break ;
        case    0    :    printf("It is a scalenous triangle.\n") ;    break ;
        case    1    :    printf("It is a right-angled triangle.\n") ;    break ;
        case    2    :    printf("It is an isosceles triangle.\n") ;    break ;
        case    3    :    printf("It is a equilateral triangle.\n") ;    break ;
    }

    return 0;
}
int judgeTriangle(int x,int y,int z)
{
	int ans;
	
	if (x == y && y == z)
		ans = 3;
	else if (x == y || y == z || x == z)
		ans = 2;
	else if ((x*x+y*y == z*z) || (x*x+z*z== y*y) || (y*y+z*z == x*x))
		ans = 1;
	else if (x+y <= z || x+z <= y || y+z <= x)
		ans = -1;
	else
		ans = 0;
	return ans;
}
