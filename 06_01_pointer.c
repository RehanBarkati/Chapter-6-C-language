# include<stdio.h>

int main(){
    int a=20;
    int *j=&a;

    printf("the value of a is %d\n",a);
     printf("the value of a is %d\n",*&a);
    printf("the value of a is %d\n",*j);
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",j);
    
    return 0;
}