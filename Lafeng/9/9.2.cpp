/*��n��������ͬ���������洢�������С�����n�������в���m��������
������ڣ����ӡ����֮���ڵ��������������ʾ�޴���NULL*/
#include <stdio.h>
main()
{
	int m,n;
	scanf("%d",&n);
	int in[n];
	for (int i = 0; i<n ; i++){
		scanf("%d",&in[i]);
	}
	scanf("%d",&m);
	int out[m];
	for (int i = 0;i<m;i++){
		scanf("%d",&out[i]);
	}
	for (int i = 0;i<m;i++){
		int find = 0;
		for (int p = 0;p<n;p++){
			if (out[i]==in[p]){
				if (p>0&&p<n-1&&n!=1){
					printf("%d %d\n",in[p-1],in[p+1]);
				}
				else if (p == 0&&n!=1){
					printf("%d\n",in[1]);
				} 
				else if (p==n-1&&n!=1){
					printf("%d\n",in[n-2]);
				}
				else {
					printf("NULL");
					puts("");
				}
				find = 1;
				break;
			}
		}
		if (find==0){
			printf("NULL\n");
		}
	}
	
	return 0;
}
