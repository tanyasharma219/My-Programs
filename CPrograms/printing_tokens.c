#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    char *s;
// Important approach to be remembered
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
//logic
    for(int i = 0; i < strlen(s) ; i++)
    {
        if(s[i] == ' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }    
   
    return 0;
}
