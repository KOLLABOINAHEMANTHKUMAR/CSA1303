#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int len;
	printf("Enter the string: ");
	scanf("%s",str);
	len=strlen(str);
	if(len<2){
		printf("rejected.\n");
		return 0;
	}
	if(str[0]=='0' && str[len-1]=='1'){
		for(int i=0;i<len;i++){
			if(str[i]!='0' && str[i]!='1'){
				printf("Rejected.\n");
				return 0;
			}
		}
		printf("Accepted\n");
	}
	else
	{
		printf("rejected.\n");
	}
}
