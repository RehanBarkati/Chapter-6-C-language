# include<stdio.h>
 void wrongswap(int a, int b);
 void swap(int *a, int *b);

int main(){
    int x=4, y=7;
    printf("the value of x and y before call is %d and %d\n",x,y);
    wrongswap(x,y); //will not work
   swap(&x,&y);//will work
    printf("the value of x and y after call is %d and %d\n",x,y);
    return 0;
}
void wrongswap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;

}

 void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
 }
