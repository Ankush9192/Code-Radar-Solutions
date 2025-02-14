#include <stdio.h>

int main(){
    char grade;
    scanf("%s", &grade);
    if(grade == A){
        printf("Excellent");
    }
    else if(grade == B){
        printf("Good");
    }
    else if(grade  == C){
        printf("Average");
    }
    else if(grade  == D){
        printf("Below Average");
    }
    if(grade == F){
        printf("Fail");
    }
}