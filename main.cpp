#include <stdio.h>
#include <assert.h>

int mstrlen(const char* str);

int main ()
{
    const char* str = "cool";
    printf("%d", mstrlen(str));

    return 0;
}

int mstrlen(const char* str)
{
    assert(str != nullptr);

    int cnt = 0;
    int i = 0;

    while (char ch = str[i] != '\0')
    {
        cnt++;
        i++;
    }
    return cnt;
}