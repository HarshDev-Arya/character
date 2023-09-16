#include <stdio.h>

int main()
{
    int b = 2;
    int a = 10;
    int age = 31;
    int isOpen = 8;
    int c,d;
    //b = b+a;
    b +=a;
    printf("b:%d\n",b);
    c= ++b;
    printf("%d\n",c);
    d=b+1;
    printf("%d\n",d);
    
    if(age >= 18 && age<=30){
        printf("You are eligable to fill the form\n");
        
    };
    if(age >= 18 || age<=30){
        printf("This is ro statement \n");
    };
    if(!isOpen){
        printf("close \n");
    };
    return 0;
}
