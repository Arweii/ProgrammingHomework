/*��ν��ͬ��������ָ����������������������ƽ�������ұ�
����Ŀ����д����������ͼ��һ�ָ�Ϊ���ķ������³���*/
#include <stdio.h>
int length (int i)
{
	int ans = 0;
	while (i){
		i /= 10;
		ans++;
	}
	return ans;
}
int pow_10(int a)
{
	int ans = 1;
	for (int i = 1 ; i <= a ; i++){
		ans *= 10;
	}
	return ans;
}
main()
{
	int num,square_num;
	int l1;
	
	scanf("%d",&num);
	square_num = num*num;
	l1 = length(num);
	if ((square_num - num) % (pow_10(l1))){
		printf("No");
	}
	else{
		printf("Yes");
	}
	return 0;
} 
