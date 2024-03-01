// Вариант 3
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
// Функция, которя используется для ввода множества чисел в виде двойчной системы
void input_base(char a[][MAX],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        error:
        printf("Enter the %d-th element of the array: ",i+1);
        scanf("%s",&a[i]);
        for (int j = 0; j < strlen(a[i]); j++)
            {
                /* code */
                if (isdigit(a[i][j]))
                {
                    /* code */
                    if (a[i][j] == '0' || a[i][j] == '1')
                    {
                        /* code */
                        continue;
                    }
                    else
                    {
                    printf("The value entered is incorrect\n");
                    goto error;
                    }
                }
                else
                {
                printf("The value entered is incorrect\n");
                goto error;
                }
            }
    }
}
// Функция, которя используется для перехда множества чисел в виде двойчной системы на множество чисел в виде десятиной системы
void exchange(char a[][MAX],int n,int b[])
{   
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < strlen(a[i]); j++)
        {
            k += (a[i][j] - '0') * pow(2,strlen(a[i])-j-1);
        }
        b[i] = k;
    }
}
// Функция, которя используется для вывода множества чисел в виде десятичной системы
void out_put(int b[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("The %d-th element of the array : %d \n",i+1,b[i]);
    }
    
}
int main()
{
    printf("Convert binary to decimal system\n");
    int n;
    printf("Enter the length of the array n: ");
    scanf("%d",&n);
    char a[n][MAX];
    int b[n];
    printf("Binary system\n");
    input_base(a,n);
    exchange(a,n,b);
    printf("Dicimal system\n");
    out_put(b,n);
    getch();
    return 0;
}