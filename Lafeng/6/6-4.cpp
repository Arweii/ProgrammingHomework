/*������ָ�����ͷ�����һ���������ı��Ρ����磬12321��55555��45554��11611���ǻ�������
����һ�����Ȳ�����10λ������n���ж����Ƿ��ǻ������� 
����n
���Yes��No*/
//emm�Ͽν��ˡ��� 
#include <stdio.h>
main()
{
	int n,n0;
	int remake = 0;
	int t;
	
	scanf("%d",&n);
	n0 = n;
	while (n)
	{
		t = n%10;
		remake = remake*10+t;
		n = n/10;
	}
	if (n0 == remake)
		printf("Yes");
	else
		printf("No");
return 0;
 } 
