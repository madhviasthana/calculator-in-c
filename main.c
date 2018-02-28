#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2,c,choice;
    char option;
    do{
    printf("\n1 for add\n2 for division\n3 for multiplication\n4 for substract");
    printf("\nenter your choice");
    scanf("%d",&choice);
    printf("enter the num1\n");
    scanf("%d",&num1);
    printf("enter num2\n");
    scanf("%d",&num2);
    switch(choice)
    {
        case 1:
                c=num1+num2;
                printf("add=%d",c);
                break;
            case 2:
                c=num1/num2;
                printf("division is %d",c);
                break;
                case 3:
                    c=num1*num2;
                    printf("multiply is %d",c);
                    break;
                    case 4:
                        c=num1-num2;
                        printf("substract is %d",c);
                        break;
    }
                        printf("\ndo you want to continue press: y/N\n");
                        option=getche();
    }
    while(option=='y');
    getch();
    return 0;



}
