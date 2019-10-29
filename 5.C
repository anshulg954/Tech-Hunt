#include<stdio.h>
int total(int k){
    static int x=0;
    while(k){
            x=k&1;
            k>>=1;
            }
     return x;
}
int main(){
   static int i=0;
    int j=5;
   for(;j>0;){
    i=i+total(j);
    j=j-1;
   }
  printf("%d\n",i%4);
  return 0;
}
