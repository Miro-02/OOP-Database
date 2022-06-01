#include "MyName.h"

bool CheckCapital(char ch)
{
    if (ch < 'A' || ch > 'Z')
    {
        return false;
    }
    return true;
}
bool CheckSmall(char ch)
{
    if (ch < 'a' || ch > 'z')
    {
        return false;
    }
    return true;
}

void MyName::SetStr(const char *name)
{
    if (!CheckCapital(name[0]))
    {
        throw 0;
    }
    for (size_t i = 1; i < str.size(); i++)
    {
        if (!CheckSmall(name[i]))
        {
            throw 0;
        }
    }
    str = name;
}