#include <stdio.h>
#include <stdlib.h>
main()//�����Ǵ����öѵģ�զŪҲ���У�csdn��˵ò��c����û��malloc��string���ڴ�Ļ��ư��Ͱ��� 
{
	int n;
	scanf("%d",&n);
	int subsequence[n];
	char array[12][32];
	for (int i=0;i<n;i++){
		scanf("%s",array[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%d",&subsequence[i]);
	}
	for (int i=0;i<n;i++){
		printf("%s\n",array[subsequence[i]]);//�����ֻ��һ�����Ե���ˣ���������һ���ָ�һ�� 
	}
	
	return 0;
}
