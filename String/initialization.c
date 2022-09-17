#include<stdio.h>

int main()
{
    /*
    It is string initialization
     char a[] = {'a', 'b', 'c', '\0'};
    char a[10] = {'a', 'b', 'c', '\0'};
    char a[] = "abc"; 
    */
    char a[20] = "you are fhf"; // 4 method
    
    char str[20];

    // string input
    // scanf("%s", str);
    gets(str);

    // printf("%s\n", a); // output string
    puts(str);


}