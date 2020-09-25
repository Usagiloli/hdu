#include<stdio.h>
typedef struct{
   char clr[16];
   int num;
} balloon;
int strj(char*,char*);
int main()
{
  int i,n,j,cnt,fl,ansn,ansp;
  char color[16];
  balloon bln[1001];
  
  while(scanf("%d\n",&n)!=EOF)
{

  if(n==0)
    break;
    
  cnt=0;
  ansn=0;
  
  for(i=0;i<n;i++)
  {
   fl=0;
   for(j=0;scanf("%c",color+j);j++)
      if(color[j]<'a'||color[j]>'z')
      {
        color[j]=0; 
        break;
      }
   
   for(j=0;j<cnt;j++)
   {
     if(strj(color,bln[j].clr))
       {
         bln[j].num++;
         fl=1;
         break;
       }
   }
     if(!fl)
       {
         for(j=0;color[j]!=0;j++)
         {
           bln[cnt].clr[j]=color[j];
           bln[cnt].num=1;
         }
         bln[cnt].clr[j]=0;
         cnt++;
       }
   
 
  }
   for(j=0;j<cnt;j++)
   {
      if(ansn<bln[j].num)
      {
        ansn=bln[j].num;
        ansp=j;
      }
      else
      {
        bln[j].num=0;
        bln[j].clr[0]=0;
      }
   }
   j=0;
   while(bln[ansp].clr[j]!=0)
   {
     printf("%c",bln[ansp].clr[j]);
     j++;
   }
   bln[ansp].clr[0]=0;
   printf("\n");
}

return 0;
}

int strj(char* str1,char*str2)
{
   int i=0;
   for(i=0;str1[i]!=0||str2[i]!=0;i++)
   {
     if(str1[i]!=str2[i])
       return 0;
   }
   return 1;
}
