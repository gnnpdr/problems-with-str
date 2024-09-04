#include <stdio.h>
#include <assert.h>

void strcpy(char* str1, const char* str2);

int main ()
{
    char str1[] = "";
    const char* str2 = "cool"; 
    //printf("coolguy\n");
    strcpy(str1, str2);
    printf("%s", str1);

    return 0;
}

void strcpy(char* str1, const char* str2)
{
    assert(str1 != nullptr);
    assert(str2 != nullptr);
    int i = 0;

    while(str2[i] != '\0')
    {
        str1[i] = str2[i];
        //printf("check symbol %d - %c\n", i+1, str1[i]);
        i++;
    }
    //printf("check symbol %d - %c\n", i+1, str1[i]);
    str1[i] = str2[i];
}