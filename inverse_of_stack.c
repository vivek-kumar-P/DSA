#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int first = -1;

// int push(int data){
//     first = first + 1;
//     for(int i = first;i>0;i--){
//         stack_arr[i] = stack_arr[i-1];
//     }
//     stack_arr[0] = data;
    
// }

int push(int n){
    first = first +1;
    for(int i = first ; i>0;i--){
        stack_arr[i]=stack_arr[i-1];
    }
    stack_arr[0] = n;
}
void print(){
    printf("the elements of the stack are:\n");
    first = 0;
    for(int i = 0 ; i < 4 ; i++){
        printf("%d\n",stack_arr[i]);
    }

}

int main(){
    push(90);
    push(80);
    push(70);
    push(60);
    push(50);
    print();
    return 0;
}