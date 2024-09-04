#include <stdio.h>
#include <assert.h>

const char* mstrchr(const char* str, char ch);

int main ()
{
    const char* str = "cool";
    char ch = 'o'; 
    printf("%p", mstrchr(str, ch));

    return 0;
}

const char* mstrchr(const char* str, char ch)
{
    assert(str != nullptr);
    int i = 0;

    do
    {
        if (ch == str[i])
            //printf("the o address %p\n", str[i]);
            return &str[i];
        i++;
        //printf("check address - %p\n", str[i]);
    }while(str[i] != '\0');

    return NULL;
}