/*ÿ���µף���˾��Ҫ��Ա�������ʡ�ÿ��Ա���Ĺ��ʶ����ɣ�100��50��20��10��5��2��1) 
7����ֵ�ĳ�Ʊ��ɵġ�Ϊ�˷����ʵļ�㣬��˾�ᾡ����Ա�����ϴ���ֵ�ĳ�Ʊ��
����ĳ��Ա���Ĺ���Ϊ1260����ô��˾���Ա��12��100Ԫ�ġ�1��50Ԫ�ġ�1��10�ĳ�Ʊ��
��������ǣ�������ĳԱ���Ĺ��ʣ�����������θ�Ա�������ʡ�*/
#include <stdio.h>
main()
{
	int sala[7]={};
	int n;
	
	scanf("%d",&n);
	while(n/100){
		sala[0]++;
		n -= 100;
	}
	while (n/50){
		sala[1]++;
		n -= 50;
	}
	while (n/20){
		sala[2]++;
		n -= 20;
	}
	while (n/10){
		sala[3]++;
		n -= 10;
	}
	while (n/5){
		sala[4]++;
		n -= 5;
	}
	while (n/2){
		sala[5]++;
		n -= 2;
	}
	while (n){
		sala[6]++;
		n -= 1;
	}
	if(sala[0]){
		printf("100:%d\n",sala[0]);
	}
	if(sala[1]){
		printf("50:%d\n",sala[1]);
	}
	if(sala[2]){
		printf("20:%d\n",sala[2]);
	}
	if(sala[3]){
		printf("10:%d\n",sala[3]);
	}
	if(sala[4]){
		printf("5:%d\n",sala[4]);
	}
	if(sala[5]){
		printf("2:%d\n",sala[5]);
	}
	if(sala[6]){
		printf("1:%d\n",sala[6]);
	}
	return 0;
}
