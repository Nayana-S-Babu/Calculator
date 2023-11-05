#include<stdio.h>
int main()
{
    int option,contin=1,num1,num2;
    while(contin==1)
    {
    printf("Enter two numbers to perform calculation:");
    scanf("%d%d",&num1,&num2);
    printf("\nSelect the operation by entering the number corresponding to it:");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        printf("\n%d+%d=%d",num1,num2,(num1+num2));
        break;
    case 2:
        printf("\n%d-%d=%d",num1,num2,(num1-num2));
        break;
    case 3:
        printf("\n%d*%d=%d",num1,num2,(num1*num2));
        break;
    case 4:
        printf("\n%d/%d=%d",num1,num2,(num1/num2));
        break;
    default:
        printf("\nInvalid operation");
    }
    printf("\nenter 1 to continue or any else");
    scanf("%d",&contin);
}
    return 0;
}
