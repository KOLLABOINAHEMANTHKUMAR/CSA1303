#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len;
	printf("Enter the string");
	scanf("%s",str);
	len=strlen(str);
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			printf("rejected");
			return 0;
		}
	}
	printf("accepted");
}
