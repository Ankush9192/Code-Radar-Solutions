#include <stdio.h>

int main(){
    char A,B,C,D,F;
    scanf("%c %c %c %c", &A,&B,&C,&D,&F);
    if(A == A){
        printf("Excellent");
    }
    else if(A == B){
        printf("Good");
    }
    else if(A == C){
        printf("Average");
    }
    else if(A == D){
        printf("Below Average");
    }
    if(A == F){
        printf("Fail");
    }
}