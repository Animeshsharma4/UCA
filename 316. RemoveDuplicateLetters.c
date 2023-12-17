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

        while( top!=-1 && s[i]<stack)
    }
}