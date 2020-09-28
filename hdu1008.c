#include<stdio.h>

int main()
{
  int n,i,fl=0;//0=up,1=down
  int ans=0,sp=0,ep=0,lp=0;

  while(scanf("%d\n",&n)!=EOF)
{
  if (n==0)
  {
    break;
  }
  fl=0;
  ans=0,sp=0,ep=0,lp=0;
  for(i=1;i<=n;i++)
  {
    scanf("%d",&ep);
    if(fl==0)
    {
      if(ep>=lp)
        {
          lp=ep;
        }
      else
      {
        ans+=6*(lp-sp);
        sp=lp;
        lp=ep;
        fl=1;
      }    
    }
    else if(fl==1)
    {
      if(ep<=lp)
      {
        lp=ep;
      }
      else
      {
        ans+=4*(sp-lp);
        sp=lp;
        lp=ep;
        fl=0;
      }
    }
  }
  if(fl==0)
  {
    ans+=(ep-sp)*6;
  }
  else
  {
    ans+=(sp-ep)*4;
  }
  printf("%d\n",ans+5*n);
}
return 0;
}

