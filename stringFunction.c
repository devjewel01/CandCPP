#include<stdio.h>
#include<string.h>

int main()
{
    /* String Funtion
    strlen()
    strcpy()
    strcmp()
    strcat()
    strrev()
    strlwr()
    strupr()
    strstr()
    */

   // String Length
    // char s[20];
    // gets(s);
    // int n = strlen(s);
    // printf("%d\n", n);

    // String Copy 
    // char a[10], b[10];
    // gets(a);
    // strcpy(b, a);
    // puts(b);

    // String Compare 
    // char a[10], b[10];
    // gets(a);
    // gets(b);
    // int v = strcmp(a, b);
    // printf("%d\n", v);

    // String Concatanation 
    // char a[20], b[20];
    // gets(a);
    // gets(b);
    // strcat(a,b);
    // puts(a);

    // String Reverse
    // char a[20];
    // gets(a);
    // puts(strrev(a));

    // String Lower upper 
    char a[20];
    gets(a);
    puts(strlwr(a));
    puts(strupr(a));


    return 0;
}