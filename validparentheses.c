// Valid Parentheses

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// 1> Open brackets must be closed by the same type of brackets.

// 2> Open brackets must be closed in the correct order.

// 3> Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char * s){
    
    int len = strlen(s), ptr = 0;
    char *stack = malloc(len+1); 
    
    int a = 0, b = 0, c = 0;
    
    while(*s != 0)
    {
        if(*s == '(') {
            a++;
            stack[++ptr] = 1;
        }
        
        if(*s == '[') {
            b++;
            stack[++ptr] = 2;
        }
        
        if(*s == '{') {
            c++;
            stack[++ptr] = 3;
        }
        
        if(*s == ')')
        {
            if(stack[ptr] == 1) {
                a--;
                ptr--;

            }
            else return false;
        }
        if(*s == ']')
        {
            if(stack[ptr] == 2) {
                b--;
                ptr--;
            }
            else return false;

        }
        if(*s == '}')
        {
            if(stack[ptr] == 3) {
                c--;
                ptr--;
            }
            else return false;
        }
        
        s++;
    }
    
    if(a > 0 || b > 0 || c > 0) {
        return false;
    }
    return true; 
}
int main(){
    char *s="()";
    bool f=isValid(s);
    printf("%d",f);
}
