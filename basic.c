#include <stdio.h>
int main(){
    typedef struct student {
        char name[50];
        int age;
    } student;
    
    //create array of structure 
    student arr[3];
    
    //input details
    for(int i = 0; i< 3; i++){
        printf("Name: ");
        scanf("%s", &arr[i].name);
        printf("Age: ");
        scanf("%d", &arr[i].age);
    }
    
    
    //print details
    printf("Student Details :\n");
     for(int i = 0; i< 3; i++){
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
    }
    
    return 0;
}
