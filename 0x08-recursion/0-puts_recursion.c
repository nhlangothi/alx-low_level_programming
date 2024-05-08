#include "main.h"
/**
 * the name of function is _puts_recursion 
 * and only has one parameter
 */

void _puts_recursion(char *s){
	if( *s != '\0'){

    _putchar(*s);
    _puts_recursion(s+1);}
	else
	_putchar('\n');
}
