// 
//  bitAnd - x & y using only ~ and |
//  Example bitAnd(6, 5) = 4
//  Legal ops:  ~ |  
// Max ops: 8
// 






#include <stdio.h>


int bitand(int x ,int y){
    return ~(~x | ~y);
}

// int main(){
//     printf("%d ",bitand(4,5));
// }