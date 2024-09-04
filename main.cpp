#include <stdio.h>
#include <assert.h>

int mstrcmp(const char* str1, const char* str2);

int main ()
{
    const char* str1 = "cool";
    const char* str2 = "coold"; 
    printf("%d", mstrcmp(str1, str2));

    return 0;
}

int mstrcmp(const char* str1, const char* str2)
{
    assert(str1 != nullptr);
    assert(str2 != nullptr);
    int i = 0;

    do
    {
        if (str1[i] != str2[i])
            //printf("the o address %p\n", str[i]);
            return 1;
        //printf("check address %d - %p\n", i+1, str1[i]);
        i++;
    }while(str1[i-1] != '\0');
    return 0;
}