#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
int push(int n){
    if(top == MAX - 1){
        printf("stack overflow");
        return 0;
    }
    top = top+1;
    stack_arr[top] = n;
}
int pop(){
    int value;
    if(top == -1){
        printf("stack underflow");
        exit(1);
    }
    value = stack_arr[top];
    top = top - 1;
    return value;
}

int print(){
    if(top == -1){
        printf("stack underflow\n");
        exit(1);
    }
    for(int i=top;i>-1;i--){
        printf("%d\n",stack_arr[i]);
    }
}
void main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    print();
    data = pop();
    data = pop();
    data = pop();
    data = pop();
    // data = pop();

    print();
    // print("the poped value is: %d",data);

}