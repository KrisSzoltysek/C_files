#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("what's your name?\n");
    string name = GetString();
    printf("hello, %s\n", name);
}
