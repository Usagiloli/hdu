#include<stdio.h>
int main()
{
  int n,i,cnt=1;
  char sp,ep;
  while(scanf("%d\n",&n)!=EOF)
{
  if(n==0)
    break;
  for(i=1;i<=n;i++)
  {
    scanf("%c",&sp);
    while(scanf("%c",&ep),ep!='\n')
    {
      if(ep==sp)
      {
        cnt++;
        }
      else
      {
        if(cnt!=1)
          printf("%d",cnt);
        printf("%c",sp);
        sp=ep;
        cnt=1;
        }
      }
    if(cnt!=1)
      printf("%d",cnt);
    printf("%c\n",sp);
    cnt=1;
    }
}
  return 0;
}

