#include<stdio.h>
#include<conio.h>
#include"math.h"
int main()
{
    int a;
    float b,c,d;
    printf("----------------------------\n");
    printf("'This is a basic calculator'\n");
    printf("----------------------------\n\n");

    printf("press following keys for different tasks\n\n");
    printf("\t_____________________________________________________________________________________________________\n\n");
    printf("\t1.ADDITION\t\t2.SUBTRACTION\t\t         3.DIVISION\t\t 4.MULTIPLICATION\n\t");
    printf("5.POWER\t\t        6.EXPONANTIOLS\t\t         7.SQUARE ROOT\t\t 8.SQUARE\n\t");
    printf("9.CUBE\t\t       10.TWO DEGREE EQ ROOTS\t\t11.INFO\t\t        12.EXIT\n\t");
    printf("_____________________________________________________________________________________________________\n\n");
 pip:printf("\nEnter your choice = ");
      scanf("%d",&a);

switch(a)
    {
    case 1:
        {
            printf("ADDITION is in format of 'A+B'\n");
            printf("enter first no = ");
            scanf("%f",&b);
            printf("enter second no = ");
            scanf("%f",&c);
            printf("%f + %f = %f\n",b,c,b+c);
            goto pip;
        }
    case 2:
        {
            printf("SUBTRACTION is in format of 'A-B'\n");
            printf("enter first no = ");
            scanf("%f",&b);
            printf("enter second no = ");
            scanf("%f",&c);
            printf("%f - %f = %f\n",b,c,b-c);
            goto pip;
        }
    case 3:
        {
            printf("DIVISION is in format of 'A/B'\n");
            printf("enter first no = ");
            scanf("%f",&b);
            printf("enter second no = ");
            scanf("%f",&c);
            printf("%f / %f = %f\n",b,c,b/c);
            goto pip;
        }
    case 4:
        {
            printf("MULTIPLICATION is in format of 'A*B'\n");
            printf("enter first no = ");
            scanf("%f",&b);
            printf("enter second no = ");
            scanf("%f",&c);
            printf("%f * %f = %f\n",b,c,b*c);
            goto pip;
        }
    case 5:
        {
            printf("POWER is in format of 'A^B'\n");
            printf("enter first no = ");
            scanf("%f",&b);
            printf("enter second no = ");
            scanf("%f",&c);
            d=pow(b,c);
            printf("%f * %f = %f\n",b,c,d);
            goto pip;
        }
    case 6:
        {
            printf("POWER is in format of 'e^A'\n");
            printf("enter A value = ");
            scanf("%f",&b);
            d=pow(2.78,b);
            printf("e ^ %f = %f\n",b,d);
            goto pip;
        }
    case 7:
        {
            printf("SQUARE ROOT is in format of 'A^.5'\n");
            printf("enter A value = ");
            scanf("%f",&b);
            d=pow(b,.5);
            printf("%f ^ 1/2 = %f\n",b,d);
            goto pip;
        }
    case 8:
        {
            printf("SQUARE is in format of 'A^2'\n");
            printf("enter A value = ");
            scanf("%f",&b);
            d=pow(b,2);
            printf("%f ^ 2 = %f\n",b,d);
            goto pip;
        }
    case 9:
        {
            printf("CUBE is in format of 'A^3'\n");
            printf("enter A value = ");
            scanf("%f",&b);
            d=pow(b,3);
            printf("%f ^ 3 = %f\n",b,d);
            goto pip;
        }
    case 10:
        {

            printf("Two degree eq roots is in format of 'aX^2 + bX +c = 0'\n");
            float q,w,e,r,t;
            printf("enter A value = ");
            scanf("%f",&q);
            printf("enter B value = ");
            scanf("%f",&w);
            printf("enter C value = ");
            scanf("%f",&e);
            t=w*w-4*q*e;
            r=(-w+pow(t,.5))/2;
            t=(-w+pow(t,.5))/2;
            printf("Roots of above equation are = %f , %f ",r,t);
            goto pip;
        }
    case 11:
        {
            printf("\t_____________________________________________________________________________________________________\n\n");
            printf("\t1.ADDITION\t\t2.SUBTRACTION\t\t         3.DIVISION\t\t 4.MULTIPLICATION\n\t");
            printf("5.POWER\t\t        6.EXPONANTIOLS\t\t         7.SQUARE ROOT\t\t 8.SQUARE\n\t");
            printf("9.CUBE\t\t       10.TWO DEGREE EQ ROOTS\t\t11.INFO\t\t        12.EXIT\n\t");
            printf("_____________________________________________________________________________________________________\n\n");
            goto pip;
        }
    case 12:
        {
            break;
        }
    default:
        printf("try again no data for this input\nfor help press 11.");
        goto pip;
    }
    getch();

}
