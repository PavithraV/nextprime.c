#include <stdio.h>
void main(void) 
{
	  int temp,n=121,i,flag=1;
	  temp=n;
	  LOOP:while(flag!=0)
	  {
		    temp++;
		    for(i=2;i<=n/2;i++)
		    {
			      if(temp%i==0)
			      {
				        flag=1;
				        goto LOOP;
			      }
			      else
			      {
				        flag=0;
			      }
		    }
	  }
	  if(flag==0)
	  {
		    printf("%d is the next prime",temp);
	  }
	
	
}
