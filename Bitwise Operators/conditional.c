#include <stdio.h>

int conditional(int x,int y,int z){
    int mask =!!x;
    if(mask){
        return y;
    }
    else{
        return z;
    }
}