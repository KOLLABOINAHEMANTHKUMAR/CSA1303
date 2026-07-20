#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int len;
	printf("Enter the string");
	scanf("%s",str);
	len=strlen(str);
	if(len>0 && str[0]=='a' && str[len-1]=='a'){
		printf(" SUcesss");
	}else{
		printf("not Success.");
	}
}
