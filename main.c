#include <stdio.h>
#include <windows.h>

int main(){
    int freq[10000];
    int duration[10];
    int loopAmount = 1;
    int length = 8;
    
    for (int i = 0; i < length; i++){
        printf("Duration: ");
        scanf("%d", &duration[i]);
        printf("Frequency: ");
        scanf("%d", &freq[i]);
    }

    for (int j = 0; j < loopAmount; j++){
        for (int i = 0; i < length; i++){
            printf("%d, %d; ", duration[i], freq[i]);
            Beep(freq[i], duration[i] * 1000); 
            // freq -> pitch;  duration -> how long it goes on for in ms (converted to seconds)
        }
    }

    return 0;
}