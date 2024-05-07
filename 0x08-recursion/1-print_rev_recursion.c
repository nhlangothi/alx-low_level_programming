#include <stdio.h>

void _puts_recursion(char *s){
    
    if( *s != '\0'){
        _puts_recursion(s +1);
        putchar(*s);
        
    }else putchar('\n');
}
