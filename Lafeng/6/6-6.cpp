/*��дһ������������Ĺ�ʽ����e^x��ֵ����ʽ�򲻳�����
��˿��Լ��赱ĳһ��С��1e��8ʱ��ѭ����ֹ��1e��8��Ϊ10��-8�η��� 
���и���ʾ�������ǿ�����һ���⺯������233
����������Ϊdouble*/
#include <stdio.h>
#include <math.h>
double jiecheng(double a)//���ڽ׳˵��ӳ��� Ѫ����Ľ�ѵ��ǧ����ǰ��int���ӳ�������ִ�С������������� 
{
	double i;
	double ans = 1.0;
	for (i = 1 ; i <= a ; i ++)
	{
		ans *= i;
	}
	return ans;
 } 
double power(double m,int n)//дһ��С���˷����ӳ��� ,�ó������m��n�η� 
//���������ʹ��pow�������󣬻������ͷ�ļ����ظ������ˣ�Ϊʲô����Ϊmath.h��Ҳ��pow���������Ҷ���Ĳ�һ�� 
{
	
	if (n == 0)
		m = 1.0;
	else
	{
		int i;
		double m0;
		m0 = m;
		for(i = 1;i < n;i++)
		{
			m *= m0;
		}
	}
	return m;
}
main ()
{
	double x;//������� x 
	double mouyixiang = 1.0;//ĳһ���
	double ans = 1.0;
	double p;//ָʾ���� 
	
	scanf ("%lf",&x);
	p = 1.0;
	while (fabs(mouyixiang) >= 1e-8)
	{
		mouyixiang = (power(x,p))/(jiecheng(p)) ;
		ans += mouyixiang;
		p = p+1;
	}
	printf("%.4lf\n",ans);
return 0;
}
