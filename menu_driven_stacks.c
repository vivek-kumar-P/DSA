#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

int isfull(){
    if(top == MAX-1 ){
        printf("stack overflow\n");
        return 1;
    }
    return 0;
}

int isempty(){
    if(top == -1){
        printf("stack underflow\n");
        return 1;
    }
    return 0;
}

int push(int data){
    if(isfull()){
        return 0;
    }
    top = top+1;
    stack_arr[top] = data;
    printf("%d added\n",data);
    return 1;
}

int pop(){
    int num;
    if(isempty()){
        return 0;
    }
    num = stack_arr[top];
    top = top-1;
    return num;
}

int peek(){
    if(isempty()){
        printf("Stack is empty\n");
        return -1;
    }
    printf("the topmost value is: %d\n",stack_arr[top]);
    return stack_arr[top];
}

int print(){
    for(int i=top;i>-1;i--){
        printf("%d\n",stack_arr[i]);
    }
    return 1;
}

int main(){
    int data,choice;
    while(1){
        printf("\n1. push");
        printf("\n2. pop");
        printf("\n3. print the top element");
        printf("\n4. print all the element of the stack");
        printf("\n5. quit");
        printf("\nPlease enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                printf("\nEnter the element to push: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data = pop();
                if (data != 0)
                    printf("\nThe deleted element is :%d\n",data);
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("\nThe elements of the stack are:\n");
                print();
                break;
            case 5:
                exit(1);
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}
