#include <stdio.h>
void main()
{
    char s[100];
    int i,j;
    printf("Enter the string: \n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    printf("Length of the string: %d\n",i);
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]>='A' && s[j]<='Z')
        {
            s[j]+=32;
        }
        else if(s[j]>='a' && s[j]<='z') 
        {
            s[j]-=32; 
        }
    }
    printf("Converted string: %s\n", s);
}

/*
Enter the string: 
CrEatIvE
Length of the string: 8
Converted string: cReATiVe
*/
