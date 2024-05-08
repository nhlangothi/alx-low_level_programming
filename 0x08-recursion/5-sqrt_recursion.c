#include "main.h"
int _sqrttool(int n, int y);
/*This function prints the squareoot of a number
 * if the number is less than 0 negative 1 is returned*/

int _sqrt_recursion(int y) {
	    if (y<0){
		            return -1;
			        }
	        
	        return _sqrttool(0, y);
}

int _sqrttool(int n, int y) {
	    if (n * n == y) {
		            return n;
			        }
	        if (n * n > y) {
			        return -1; 
				    }
		    return _sqrttool(n + 1, y);
}
