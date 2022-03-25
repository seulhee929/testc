#include <stdio.h>
main() {
	int i;
	float sum;
	for(i=2;i<11;i=i+1){
		printf("%d/%d*%d ",i+2,i,i+1);
		sum=sum+(i+3.0)/(i*(i+1.0));
		if(i<10)
		printf(" + ");
	}
	printf("= %f",sum);
}
