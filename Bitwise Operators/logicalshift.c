#include <stdio.h>


int logicalshift(int x,int n){
    int mask=~(((1 << 31) >> n) <<1);
    return (x>>n) & mask;
}