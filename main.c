#include <stdio.h>
#include <stdlib.h>
float somme (float t[]){
    float s;
    int i;
    s=0;
    for(i=0;i<10;i++)
        s=s+t[i];
    return s;
}
float multi(float t[]){
float p;
    int i;
    p=0;
    for(i=0;i<10;i++)
        p=p*t[i];
    return p;}
    float avg(float t[]){
        float avg,s;
        s=somme(t);
avg =somme(t)/10;
return avg;}
void pn(float t[]){
int i;
 printf("the positive number");
 for(i=0;i<10;i++)
    if(t[i]>0)
    printf("number positive is %.2f",t[i]);

 for(i=0;i<10;i++)
    if(t[i]<0)
    printf("number negative is %.2f",t[i]);



  }
int main()
{
    float t[10];
    int i;
    printf("enter the number");
    for(i=0;i<10;i++){
        printf("t[%i]",i+1);
        scanf("%f",&t[i]);

    }
    printf("sum is %.2f",somme(t));
    printf("average is %.2f",somme(t));
    printf("multi is %.2f",multi(t));
    pn(t);
    return 0;
}

