#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char s1[100];
    char d[100];
    int i=0,j=0;
    scanf("%s",s);
    scanf("%s",s1);
    //strcat(s1,s);
    while(s1[i]!='\0')//traversing the string untill null character encounter 
    {
        d[i]=s1[i];
        i++;
        
    }
    
    while(s[j]!='\0')//copying source string into destination string till null character encounter
    {
        d[i]=s[j];
        i++;
        j++;
    }
    d[i]='\0';//adding null character to destination string
    printf("%s\n",d);

    printf("%ld\n",sizeof(d));//return total capacity of the string %ld is given it returns long unsigned integers
    printf("%ld",strlen(d));//total length of the string without null character %ld is given it returns long unsigned integers
    return 0;
}
