/*��д������㲢����������ڻ�
�����У���һ��һ������n��1<=n<=10���ڶ���2Xn���������Կո�ָ���������������Ϊn��һά���飨����)*/
#include <stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	
	int Vector1[n];
	int Vector2[n];
	int answer[n];
	int ans=0;
	
	for (int i=0;i<n;i++){
		scanf("%d",&Vector1[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%d",&Vector2[i]);
	}
	for (int i=0;i<n;i++){
		ans+=Vector1[i]*Vector2[i];
	}
	printf("%d",ans);
	return 0;
}
