/*��֪һ������Ϊn���������飬�ڱ�֤ԭ˳���ǰ���£�
�������������е�ż���ŵ����е�����֮ǰ���浽һ���������У�������������� 
��2�У���һ��Ϊһ������n(0<n<=200)���������������������ڶ���Ϊn���ÿո�ָ���������
�豣���ڴ����������С�����������֤��������������int�洢*/
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int num[n];
	int re[n];
	int p = 0;
	
	for (int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for (int i = 0 ; i<n;i++){
		if (num[i]%2==0){
			re[p]=num[i];
			p++;
		}
	}
	for (int i = 0 ; i<n;i++){
		if (num[i]%2==1){
			re[p]=num[i];
			p++;
		}
	}
	for (int i = 0 ; i<n-1;i++){
		printf("%d ",re[i]);
	}
	printf("%d",re[n-1]);
	puts("");
	return 0;
 } 
