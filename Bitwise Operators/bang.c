#include <stdio.h>

int bang(int x){
    return ((x | (~x+1))>>31)+1;
}