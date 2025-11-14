#include<stdio.h>
int main(){
	char line[200];
	printf("Enter a line : ");
	fgets(line,200,stdin);
	if(line[0]=='/' & line[1]=='/'){
		printf("This is a comment");
	}
	else{
		printf("Not a comment");
	}
}