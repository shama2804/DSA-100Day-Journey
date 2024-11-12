#include <stdio.h>
void main()
{
    char s[100];
    int i,vcount=0, ccount=0,wordcount=1;
    printf("Enter the string:\n");
    scanf("%[^\n]s", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if(s[i]==' ' && s[i+1]!=' '&&s[i+1]!='\0')
            wordcount++;
    }
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                vcount++;
            else
                ccount++;
        }
    }
    printf("Input string: %s\n", s);
    printf("Number of words: %d\n", wordcount);
    printf("Number of vowels: %d\n", vcount);
    printf("Number of consonants: %d\n", ccount);
}

/*
Enter the string:
This is a great story about Anabeth
Input string: This is a great story about Anabeth
Number of words: 7
Number of vowels: 12
Number of consonants: 17
  */
