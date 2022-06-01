#include <string>

bool IsCapital(char ch)
{
    if (ch < 'A' || ch > 'Z')
    {
        return false;
    }
    return true;
}
bool IsSmall(char ch)
{
    if (ch < 'a' || ch > 'z')
    {
        return false;
    }
    return true;
}

bool IsNameGood(const std::string& name)
{
    if (!IsCapital(name[0]))
    {
        return false;
    }
    for (size_t i = 1; i < name.size(); i++)
    {
        if (!IsSmall(name[i]))
        {
            return false;
        }
    }
    return true;
}