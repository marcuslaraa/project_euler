#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i=2;
	
	while(i <= n/2){
		if(n % i++ == 0)
			return 0;     // código mais curto 
	}
	
	return 1;

}


int main () {
    int i , j = 0, ultPrime;

    for(i = 2; i < INFINITY; i++) {
        if(isPrime(i)) {
            j++;
            if(j == 10001) {
                ultPrime = i;
                break;
            }
        }
    }

    printf("%d", ultPrime);
    
    return 0;
}