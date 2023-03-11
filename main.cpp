#include <stdio.h>
#include <string.h>

main()
{
	//task number 1
	printf("Enter first string: ");
	char str[100];
	gets(str);
	for(int i=0; i<strlen(str); i++)
	{
		str[i]=str[i+1];
	}
	printf("First char removed: ");
	puts(str);
	printf("\n\n");
	
	//task number 2
	printf("Enter second string: ");
	char mir[100];
	char buf[100];
	
	gets(mir);
	
	int q=strlen(mir);
	
	for(int i=q; i>0; i--)
	{
		buf[q-i]=mir[i-1];
	}
	printf("Reversed string: ");
	puts(buf);

}
