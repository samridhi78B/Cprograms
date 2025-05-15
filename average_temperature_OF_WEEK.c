#include <stdio.h>
int main(){
    typedef struct Temperature{
        float temp;
        char day[50];
    }Temperature ;
    Temperature arr[7];
    for(int i = 0; i<7; i++){
        scanf("%s", arr[i].day);
        scanf("%f", &arr[i].temp);
    }
    float sum = 0;
     for(int i = 0; i<7; i++){
        sum += arr[i].temp;
    }
    float average = sum/7;
    printf("Average Temperature: %.2f", average);
    return 0;
}
