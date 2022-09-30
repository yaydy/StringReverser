#include <stdio.h>  
#include <string.h>  

char *strrev(char *str){
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}

int main()  
{  
    char str[100];
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", str);  
    strrev(str);
    printf (" \n The string reversed is: %s ", str);  
    return 0;  
}  