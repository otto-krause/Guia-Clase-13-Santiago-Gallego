#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=0,ma=1,me=1,rt[2],y=1,v;
    rt[1]=1;
    rt[2]=1;
    printf(" %d ",rt[1]);
    printf(" %d ",rt[2]);
  while(a<1){
  	v=rt[1]+rt[2];
  	printf(" %d ",v);
  	rt[2]=rt[1];
  	rt[1]=v;

  }
}



