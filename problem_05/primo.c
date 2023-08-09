#include <stdio.h>
#include <stdlib.h>

int primo(int n){

	int i=2;
	
	while(i <= n/2){
		if(n % i++ == 0)
			return 0;     // código mais curto 
	}
	
	return 1;
	
/*	while(i <= n/2 && primo){
		if(n % i == 0){
			primo = 0;
		}
		i++;        código mais completo 
	}
	
	return primo;*/
	
}


int main() {
	
	int val;
	
	printf(" Informe um valor:");
	scanf("%d", &val);
	
	if(primo(val))
		printf("%d eh primo:", val);
	else
		printf("%d nao eh primo:", val);
	
	return 0;
}
