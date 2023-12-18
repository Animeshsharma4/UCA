// Remove Duplicate Letters

// Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is 
// the smallest in lexicographical order
//  among all possible results.

// Example 1:

// Input: s = "bcabc"
// Output: "abc"
// Example 2:

// Input: s = "cbacdcbc"
// Output: "acdb"




#include <stdio.h>
#include <string.h>

void removeduplicate(char *s){
    int count[256]={0};
    int visited[256]={0};
    char stack[256];
    int top=-1;
    for(int i=0;i<strlen(s);i++){
        count[s[i]]++;

    }
    for(int i=0;i<strlen(s);i++){
        count[s[i]]--;
        if(visited[s[i]]){
            continue;
        }

        while( top!=-1 && s[i]<stack[top] && count[stack[top]]>0){
            visited[stack[top]]=0;
            top--;
        }
        stack[++top]=s[i];
        visited[s[i]]=1;

    }
    stack[top+1]='\0';
    printf("%s\n",stack);

}
int main() {
    char s[] = "cbacdcbc";
    removeduplicate(s);
    return 0;
}