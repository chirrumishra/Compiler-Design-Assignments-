#include<stdio.h>
#include<stdlib.h>
#define size 5
struct stack
{
    int s[size];
    int top;
} st;
int stfull()
{
    if(st.top >= size - 1)
        return 1;
    else
        return 0;
}
void push(int item)
{
    st.top++;
    st.s[st.top] = item;
}
int stempty()
{
    if(st.top == -1)
        return 1;
    else
        return 0;
}
int pop()
{
    int item;
    item = st.s[st.top];
    st.top--;
    return(item);
}
void display()
{
    int i;
    if(stempty())
        printf("\nStack is Empty");
    else
    {
        for(i=st.top;i>=0;i--)
            printf("\n%d",st.s[i]);
    }
}
int main()
{
    int item, choice;
    int ans = 0;
    char temp;
    st.top = -1;
    printf("\n\t Implementation Of stack");
    while(choice != 4)
    {
        printf("\n Main Menu");
        printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.exit");
        printf("\n Enter Your Choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("\n Enter The item to be pushed");
                    scanf("%d",&item);
                    if(stfull())
                        printf("\nStack is full");
                    else
                        push(item);
                    break;
            case 2: if (stempty())
                        printf("\n Empty Stack !!");
                    else
                    {
                        item = pop();
                        printf("\nThe popped element is %d", item);
                    }
                    break;
            case 3: display();
                    break;
            case 4: goto halt;
        }
    }
halt:
    return 0;
}






