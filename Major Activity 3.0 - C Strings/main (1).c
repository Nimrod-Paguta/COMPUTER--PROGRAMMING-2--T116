#include <stdio.h>
#include <string.h>

int main()
{
  	char str[150];
  	int i, j, string, reverse, word;

  	printf("Enter any string:  ");
  	gets(str);

  	string = strlen(str);
  	word = string - 1;

  	printf("Reverse ordered words:\n");
  	for(i = string - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				reverse = 0;
			}
			else
			{
				reverse = i + 1;
			}
			for(j = reverse; j <= word; j++)
			{
				printf("%c", str[j]);
			}
			word = i - 1;
			printf(" ");
		}
	}

  	return 0;
}
