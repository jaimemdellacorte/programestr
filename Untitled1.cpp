#include<stdio.h>
#include<stdlib.h>

main()
{
int i; 
float vet[10];
for (i=0;i<=9;i++)
 {
printf("numero: %d: ", i);
scanf("%d", &vet[i]);
}
for (i=0;i<10;i++)
{
printf("Valor*%d: %d\n",i,vet[i]);
}
}
