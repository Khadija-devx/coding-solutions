#include <stdio.h>

void calculate_the_maximum(int n,int
k)
{ 
    int a=0,b=0,c=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;
j++)
      {
        int x=i&j;
        int y=i|j;
        int z=i^j;
        
        if (x<k&& x>a)
           a=x;
           
        if (y<k&& y>b)
           b=y;
           
        if (z<k&& z>c)
           c=z;
    }
}

  printf("%d\n%d\n%d\n", a,b,c);
 }
  int main()
  {
    int n,k;
    scanf("%d%d",&n,&k);
    
    calculate_the_maximum(n,k);
    
    return 0;
  }
