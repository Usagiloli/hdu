#include<stdio.h>
typedef struct{
     int sp;
     int ep;
     int val;
} maxdata;
int main()
{
  int i,inp,n,len;
  int ai;
  maxdata a[100001],ans;
  a[0].val=-1002;
  a[0].sp=0;
  a[0].ep=0;
  while(scanf("%d\n",&n)!=EOF)
{
  for(inp=1;inp<=n;inp++)
  {
    ans.val=-1001;
    printf("Case %d:\n",inp);
    scanf("%d",&len);
    
    
    for(i=1;i<=len;i++)
    {
      scanf("%d",&ai);
      if(a[i-1].val<0)
      {
        a[i].val=ai;
        a[i].sp=i;
        a[i].ep=i;
      }
      else
      {
        a[i].val=ai+a[i-1].val;
        a[i].sp=a[i-1].sp;
        a[i].ep=i;
      }
    }
    for(i=1;i<=len;i++)
    {
      if(a[i].val>ans.val)
      {
        ans.val=a[i].val;
        ans.sp=a[i].sp;
        ans.ep=a[i].ep;
        }
    }
    
    
    printf("%d %d %d\n",ans.val,ans.sp,ans.ep);
    
    
    
    if(inp!=n)
    {
      printf("\n");
    }
   } 
}
return 0;
}

