#include <stdio.h>
#include <string.h>

void main()
{
	int vowels = 0;
	char s[1000];
	printf("Type the string(instead ' ' write '_'): ");
	scanf("%s",&s);
	printf("%s\n",s);
	for(int i = 0;s[i];++i)
	{
		if (s[i] == 'a' || s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e')
		{
			printf("letter: %c place : %d\n",s[i],i-1);
			vowels += 1;
		}
	}
	printf("vowels: %d\n",vowels);
}