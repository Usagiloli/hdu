#include<stdio.h>
#include<stdlib.h>


int cmp(const void* r1,const void* r2);
void qsort(void *base,size_t nitems,size_t size,int (*compar)(const void*,const void *));
int main()
{
  int inp,n,i,inpi;
  int ar[1001];
  while(scanf("%d",&inp)!=EOF)
{
  for(inpi=0;inpi<inp;inpi++)
  {
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",ar+i);
    qsort(ar,n,sizeof(int),cmp);
    for(i=0;i<n-1;i++)
      printf("%d\x20",ar[i]);
    printf("%d\n",ar[n-1]);
  }
}
  return 0;
}
int cmp(const void*r1,const void*r2)
{
  return(*(int*)r1-*(int*)r2);
}
