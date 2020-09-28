#include<stdio.h>
#include<stdlib.h>
typedef struct{
  int j;
  int f;
  double v;
} room;

int compar(const void* r1,const void* r2);
void qsort(void *base,size_t nitems,size_t size,int (*compar)(const void*,const void *));
int main()
{
  int m,n,i,a,b;
  double ans=0;
  room r[1002];
  while(scanf("%d %d\n",&m,&n)!=EOF)
{
  if(m==-1&&n==-1)
  {
    break;
  }
  if(n==0)
  {
    printf("0.000\n");
    continue;
  }
  ans=0;
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&a,&b);
    r[i].j=a;
    r[i].f=b;
    if(b!=0)
      r[i].v=(double)a/(double)b;
    else
      r[i].v=2147483648;
  }
  qsort(r,n,sizeof(room),compar);
  for(i=n-1;i>=0;i--)
  {
    if (m-r[i].f>=0)
    {
      m-=r[i].f;
      ans+=r[i].j;
    }
    else
    {
      ans+=m*r[i].v;
      break;
    }
  }
  printf("%.3lf\n",ans);
}
  return 0;
}
int compar(const void* r1,const void* r2)
{
   int fl=0;
   room * a,*b;
   a=(room*)r1;
   b=(room*)r2;
   if(a->v>b->v)
     fl=1;
   if(a->v<b->v)
     fl=-1;
   return fl;
   
}

