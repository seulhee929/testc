#include <stdio.h>
main() {
  int i,k;
  float s1,s2=0;
  for(i=8;i<=50;i=i+2)
  {
  	for(k=2;k<i;k=k+2)
	{
  		s1=s1+k;
  	}
  	s2=s2+i/s1;
  } 	
  printf("result = %f\n",s2); 
}
