#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //ask the question
    string name = get_string("What's your name? ");
// with placeholders
    printf("hello, %s\n", name);
}
