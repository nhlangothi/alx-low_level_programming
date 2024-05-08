#include "main.h"

int factorial(int n){
    int answer;
    if( n < 0){
        return -1;
    }
    if(n == 0){
        return 1;}
    else{
    answer = n * factorial(n-1);
    } return answer;
}
