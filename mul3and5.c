/*
HackerRank
Project Euler #1: Multiples of 3 and 5
*/

#include<stdio.h>
#include<stdlib.h>

long long int sumMultiples3and5(long int limit);

int main(){
	int t = 0;
	long long int *sum;
	long int n = 0;
	int index = 0;

	scanf("%d",&t);
	
	sum = (long long int*) malloc(t*sizeof(long long int));

	for(index = 0; index < t; index++){
		scanf("%ld",&n);
		*(sum + index) = sumMultiples3and5(n);
	}
	for(index = 0; index < t; index++){
		printf("%lld\n",*(sum + index));
	}
	return 0;
}

long long int sumMultiples3and5(long int limit){
	long long int sum = 0;
	long int div3 = 0;
	long int div5 = 0;
	long int div15 = 0;

	div3 = limit/3;
	if(div3*3 == limit){
		div3 = (limit - 1)/3;
	}
	div5 = limit/5;
	if(div5*5 == limit){
                div5 = (limit - 1)/5;
        }
	div15 = limit/15;
	if(div15*15 == limit){
                div15 = (limit - 1)/15;
        }

	if(div3){
		sum += 3*(div3*(div3+1))/2;
	}
	if(div5){
		sum += 5*(div5*(div5+1))/2;
	}
	if(div15){
		sum -= 15*(div15*(div15+1))/2;
	}
	
	return sum;
}
