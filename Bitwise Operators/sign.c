/*
* sign - return 1 if positive, 0 if zero, and -1 if negative
* Examples: sign(130) = 1, sign(-23) = -1
* Legal ops: ! ~ & ^ | + << >>
* Max ops : 10
*/

#include <stdio.h>


int sign(int x){
    return ((x>>31) | !!x);
}
int main(){
    printf("%d \n", sign(20));
    printf("%d \n", sign(0));
    printf("%d", sign(-20));
}
