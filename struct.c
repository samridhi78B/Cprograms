#include <stdio.h>
#include <stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    
    date a,b;
    a.day = 15;
    a.month = 04;
    a.year = 2023;
    
    b.day = 15;
    b.month = 04;
    b.year = 2025;
    
    bool flag = true;
    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;
   
   if(flag == true) printf("Equal");
   else printf("Unequal");
    return 0;
}
