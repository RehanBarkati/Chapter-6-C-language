# include<stdio.h>
int increasedvalue(int *a){
    (*a)*=10;

}

int main(){
    int i=4;
    int *j;
    j=&i;
    printf("the value of i is %d\n",i);
    increasedvalue(j);
    printf("the value of variable after function call is %d\n",i);

    return 0;
}