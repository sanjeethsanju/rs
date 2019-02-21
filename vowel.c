#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("vowel",ch);
    }
    else
    {
        printf("not a vowel",ch);
    }
    return 0;
}
