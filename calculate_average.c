#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    typedef struct Student{
        int roll;
        char name[50];
        float marks;
    } Student;
    Student arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i].roll);
        scanf("%s", &arr[i].name);
        scanf("%f", &arr[i].marks);
    }
    float sum = 0;
     for(int i = 0; i<n; i++){
        sum += arr[i].marks;
    }
    float average = sum/n;
    printf("Average Marks: %.2f", average);
    return 0;
}
