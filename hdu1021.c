#include<stdio.h>
int main()
{
  int n,i;
  int ar[10];
  ar[0]=1,ar[1]=2;
  for(i=2;i<10;i++)
    ar[i]=(ar[i-1]+ar[i-2])%3;
  while(scanf("%d\n",&n)!=EOF)
{
  n=(n-2)%8+2;
  if(ar[n]==0)
    printf("yes\n");
  else
    printf("no\n");
}
  return 0;
}

