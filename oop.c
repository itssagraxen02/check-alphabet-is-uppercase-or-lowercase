#include<stdio.h>
int main() {

char ch;
printf("enter any alphabet : ");
scanf("%c", &ch );

// to check whether the alphabet is in lower case or upper case

if (ch <= 'z' && ch >= 'a')
{
    printf("the alphabet is lowercase");
}
else if 
 (ch <= 'Z' && ch >= 'A')
{
    printf("the alphabet is uppercase");

}
else {
    printf("it is not alphabet");
}

return 0;

}















