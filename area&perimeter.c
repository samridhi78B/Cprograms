#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    typedef struct Rect{
        int length;
        int breadth; 
    } Rect;
Rect arr[n];
for(int i =0 ; i <n;i++){
    scanf("%d", &arr[i].length);
    scanf("%d", &arr[i].breadth);
}

for(int i =0 ; i <n;i++){
    float area = arr[i].length * arr[i].breadth;
    float perimeter = 2*(arr[i].length+ arr[i].breadth);
    printf("Rectangle %d: ", i+1);
    printf("Area = %.2f, ", area);
    printf("Perimeter = %.2f ",perimeter );
    printf("\n");
}
    return 0;
}
