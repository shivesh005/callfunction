#include<stdio.h>
void  printmn (){//called function

    printf("HELLO FUNCTION\n");
    printf("enter no. of your choice=");
    int a;
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("no. is even \n");

    }
    else
    printf("no. is odd");
    
}
int main(){//calling function
    printmn();
    
}