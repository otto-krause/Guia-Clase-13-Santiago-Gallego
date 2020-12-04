#include <stdio.h>
#include <stdlib.h>
int main()//faltan las fuciones.
{
int a,rtt=0,rt[5]{0};//Vector inicializado en 0
for (a=0;a<5;a++)
{
printf("Ingrese las resistencias ");
scanf("%d",&rt[a]);
}
for (a=0;a<5;a++)
{
printf("\n Las resistencias son %d",rt[a]);
rtt=rtt+rt[a];
}
printf("\n La resistencia total es %d",rtt);
return 0;
}
 

