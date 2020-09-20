#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,len,freq[26];
	printf("ENTER STRING");
	gets(s);
	len=strlen(s);
	for(i=0;i<26;i++)
	{
		freq[i]=0;
	}
	for(i=0;i<len;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			freq[s[i]-97]++;
		}
		if(s[i]>='A'&&s[i]<='Z')
		{
			freq[s[i]-65]++;
		}
	}
	for(i=0;i<len;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d\n",freq[i]);
		}
	}
}
