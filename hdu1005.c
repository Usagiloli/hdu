#include<stdio.h>

#define X 7
int main()
{
  int i,n,A,B,fl,sp,ep,f;
  int ar[2*(X*X+1)+1];
  ar[1]=1,ar[2]=1;
  while(scanf("%d %d %d",&A,&B,&n)!=EOF)
{
   if(!A&&!B&&!n)
     break;
   fl=1;
   sp=0,ep=2147483648;
   for(i=3;i<=2*(X*X+1);i++)
   {
     ar[i]=(A*ar[i-1]+B*ar[i-2])%X;
    } 
   for(sp=1;sp<=2*(X*X+1)&&fl;sp++)
     for(ep=sp+2;ep<=2*(X*X+1)&&fl;ep++)
     {
       if(ar[sp]==ar[ep]&&ar[sp+1]==ar[ep+1])
       {
         fl=0;
         f=ep-sp;
       }
     }
     /*if(ar[i]==1&&fl==1)
     {
       fl=2;
       ep=i-1;
       sp=1;
     }
     if(fl==2)
       if(sp==ep+1)
         fl=0;
       else if(ar[i]==ar[sp])
         sp++;
       else if(ar[i]!=ar[sp])
         fl=1;
   if(fl==1)
   {
     ep=2147483648;
   }*/
   printf("%d\n",ar[(n-sp)%f+sp]);
}

return 0;
}
