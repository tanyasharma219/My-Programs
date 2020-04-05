#include <stdio.h>
int main() 
{
    char ch;
    scanf("%c\n", &ch);
    char s[20];
    scanf("%s\n", s);
    char sen[100];
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s", ch,s,sen);
    return 0;
}
