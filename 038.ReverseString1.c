#include <stdio.h>
#include <string.h>
void reverseString(char str[], char reversed[])
{
    int length=strlen(str);
    int j=0;
    for(int i=length-1;i>=0;i--) 
    {
        reversed[j++]=str[i];
    }
    
    reversed[j]='\0'; 
}

int main() 
{
    char str[100],reversed[100];
    printf("Enter a string: ");
    scanf("%99[^\n]",str);
    reverseString(str,reversed);
    printf("Reversed string: %s\n",reversed);
    return 0;
}

/*
Enter a string: crawl
Reversed string: lwarc
  */
