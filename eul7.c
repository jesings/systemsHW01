#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int check_prime(double num){
	for(int j=2;j<=sqrt(num);j++){
		if((double)(((int) num)/j)==num/j)
			return 0;
	}
	return 1;
}
int main(){
	int num_primes = 1;
	int i = 3;
	while(num_primes<10001){
		if(check_prime((double)i)){
			num_primes++;
		}
		i+=2;
	}
	printf("%d \n",i-2);
	return 0;
}
