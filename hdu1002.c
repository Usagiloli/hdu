#include<stdio.h>
char * res(char*,int);
int main()
{
  int n,i,j,len1=0,len2=0,carry=0,len=0,pr=0;
  int t=0;
  char str1[65535],str2[65535],sum[65535],* str;
  while(scanf("%d\n",&n)!=EOF)
{
  for(i=1;i<=n;i++)
  {
    printf("Case %d:\n",i);
    //input big int 1
    while(scanf("%c",str1+len1)&&(*(str1+len1)!=32)&&(*(str1+len1)!='\n'))
      len1++;
    len1--;  
    for(j=0;j<=len1;j++)
      printf("%c",*(str1+j));
    printf(" + ");
    
    
    //input big int 2
    while(scanf("%c",str2+len2)&&(*(str2+len2)!=32)&&(*(str2+len2)!='\n'))
      len2++;
    len2--;
    
    for(j=0;j<=len2;j++)
      printf("%c",*(str2+j));
    printf(" = ");
    
    
    res(str1,len1);
    res(str2,len2);
    
    
    if(len1<len2)
    {
      len=len1;
      pr=len2;
      str=str2;
    }
    else
    {
      len=len2;
      pr=len1;
      str=str1;
    }
    
    
    for(j=0;j<=len;j++)
    {
      *(sum+j)=*(str1+j)+*(str2+j)-'0'+carry;
      if(*(sum+j)>'9')
      {
        carry=1;
        *(sum+j)-=10;
      }
      else
        carry=0;
    }
    
    
    for(j=len+1;j<=pr;j++)
    {
      *(sum+j)=*(str+j)+carry;
      if(*(sum+j)>'9')
      {
        carry=1;
        *(sum+j)-=10;
      }
      else
        carry=0;
    }
    
    if(carry==1)
    {
       *(sum+pr+1)='1';
       pr++;
       carry=0;
    }
    
    res(sum,pr);
    
    for(j=0;j<=pr;j++)
        printf("%c",*(sum+j));
    printf("\n");
    len1=0,len2=0,carry=0,len=0,pr=0;
    if(i!=n)
    {
      printf("\n");
    }
  }
}
  return 0;
}




char* res(char* str,int len)
{
  int i=0;
  char buf;
  for(i=0;i<=len/2;i++)
  {
     buf=*(str+i);
     *(str+i)=*(str+len-i);
     *(str+len-i)=buf;
  }
  return str; 
}
