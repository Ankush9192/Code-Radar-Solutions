#include <stdio.h>

int main(){
    char light;
    scanf("%c", &light);
    if(light == 'R'){
        printf("Stop");
    }
    else if(light == 'G'){
        printf("Go");
    }
    if(light == 'Y'){
        printf("Slow Down");
    }
    
}