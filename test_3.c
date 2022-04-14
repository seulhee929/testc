#include <stdio.h>

main(){
	char hh[]="We are the Champion";
	char Large[80];
	char Small[80];
	int i;
	
	for(i=0;hh[i]!='\0';i++){
		if(hh[i]>='A'&&hh[i]<='Z')
			Large[i]=hh[i];
		else if(hh[i]>='a'&&hh[i]<='z')
			Large[i]=hh[i]-('a'-'A');
		else
			Large[i]=hh[i];
	}
	Large[i]='\0';
	
	for(i=0;hh[i]!='\0';i++){
		if(hh[i]>='A'&&hh[i]<='Z')
			Small[i]=hh[i]+('a'-'A');
		else if(hh[i]>='a'&&hh[i]<='z')
			Small[i]=hh[i];
		else
			Small[i]=hh[i];
	}
	Small[i]='\0';
	
	printf("%s\n",hh);
	printf("%s\n",Large);
	printf("%s\n",Small);
	
}
