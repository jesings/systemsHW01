#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sum_proper_divisors(int num){
	int sum = 0;
	for(int i = 2;i<=sqrt((double) num);i++){
		if(num/i==((double) num)/i){
			sum+=i;
			if(i!=num/i)
				sum+=num/i;
		}
	}
	return sum+1;
}
int main(){
	int sum = 0;
	for(int i = 2;i<10000;i++){
		if(sum_proper_divisors(sum_proper_divisors(i))==i&&sum_proper_divisors(i)!=i){
			sum+=i;
		}
	}
	printf("%d \r\n",sum);
	return 0;
}
