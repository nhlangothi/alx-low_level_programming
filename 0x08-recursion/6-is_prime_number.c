#include <stdio.h>
#include <stdbool.h>

bool is_prime_helper(int n, int divisor) {
	    if (divisor == 1) {
		            return 1;
			        }
	        if (n % divisor == 0) {
			        return 0;
				    }
		    return is_prime_helper(n, divisor - 1);
}

bool is_prime(int n) {
	    if (n <= 1) {
		            return 0;
			        }
	        return is_prime_helper(n, n - 1);
}
