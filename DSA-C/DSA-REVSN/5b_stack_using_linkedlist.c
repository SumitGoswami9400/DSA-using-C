// impletation of stack using linked list (using call by reference)
#include<stdio.h>

#include<stdlib.h>

typedef struct stack{
    int data;
    struct stack *next;
}stk;
void push(stk **);
void pop(stk **);
void disp(stk *);

int main(){
    stk *top = NULL;
    int ch;

    while(1){
        printf("\n------MENU------");
        printf("\n1-push\n2-pop\n3-display\n4-exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            push(&top);
            break;
            case 2:
            pop(&top);
            break;
            case 3:
            disp(top);
            break;
            case 4:
            exit(0);
        }
    }
    return 0;
}

void push(stk **tp){
    int x;
    stk *p = NULL;

    p = (stk *) malloc(sizeof(stk));

    if(p != NULL){
        printf("Enter value in stack: ");
        scanf("%d",&x);
        p->data = x;
        p->next = *tp;
        *tp = p;
    }
}
void pop(stk **tp){
    stk *p = NULL;
    if(*tp == NULL){
        printf("stack is empty");
    }
    else{
        p = (*tp);
        printf("\npoped element is %d",(*tp)->data);
        *tp = (*tp)->next;
        free(p);
    }

}
void disp(stk *tp){
   if(tp == NULL){
    printf("Stack is empty");
   }
   else{
    while(tp!=NULL){
        printf("%d  ",tp->data);
        tp=tp->next;
    }
   }
}