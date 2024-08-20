// implementation stack using array using call by reference

#include<stdio.h>
#include<stdlib.h>
#define max 100

void push(int[],int*);
void pop(int[],int*);
void disp(int[],int);
void peek(int[],int);

int main(){
    int top = -1,stack[max];
    int ch;

    while(1){
        printf("\n1-push\n2-pop\n3-disp\n4-peek\n5-Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch){

            case 1:
            push(stack,&top);
            break;

            case 2:
            pop(stack,&top);
            break;

            case 3:
            disp(stack,top);
            break;

            case 4:
            peek(stack,top);
            break;

            case 5:
            exit(0);
        }
    }
    return 0;
}

void push(int stack[],int *tp){
    int x;
    if(*tp == max-1){
        printf("Stack is full");
    }
    else{
        printf("Enter value in stack: ");
        scanf("%d",&x);
        (*tp)++;
        stack[*tp] = x;
    }
}

void pop(int stack[],int *tp){
    int x;
    if(*tp == -1){
        printf("Stack is empty");
    }
    else{
        x = stack[*tp];
        printf("Poped element is %d",x);
        (*tp)--;
    }
}

void disp(int stack[],int tp){
    if(tp == -1){
        printf("Stack is empty");
    }
    else{
        for(int temp=tp;temp>=0;temp--){
            printf("%d  ",stack[temp]);
        }
    }
}

void peek(int stack[],int tp){
    if(tp == -1){
        printf("Stack is empty");
    }
    else{
        printf("Peeked element is %d",stack[tp]);
    }
}