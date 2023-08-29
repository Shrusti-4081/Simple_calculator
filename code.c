#include<stdio.h>
float add(float,float);
float sub(float,float);
float mul(float,float);
float div(float,float);
int mode(int,int);
main()
{
    float a,b,res;
    char ch;
    printf("Enter the operator::");
    scanf("%c",&ch);
    printf("Enter the two numbers=");
    scanf("%f%f",&a,&b);

    switch(ch)
    {
        case '+':res=add(a,b);
                  break;
        case '-':res=sub(a,b);
                  break;
        case '*':res=mul(a,b);
                  break;
        case '/':if(b==0)
                {
                  printf("Error");
                  exit(0);
                }
                else
                {
                  res=div(a,b);
                  break;
                }
        case '%':res=mode((int)a,(int)b);
                break;
    }
     printf("Res=%f",res);
}
float add(float a,float b)
{
    float res;
    res=a+b;
    return res;
}

float sub(float a,float b)
{
    float res;
    res=a-b;
    return res;
}

float mul(float a,float b)
{
    float res;
    res=a*b;
    return res;
}
float div(float a,float b)
{
    float res;
    res=a/b;
    return res;
}
int mode(int a,int b)
{
    float res;
    res=a%b;
    return res;
}
