#include "Table.h"
#include "CheckName.cpp"

template <typename Column, typename T>
void Table<Column, T>::SetName(const std::string &name)
{
    if (!IsNameGood(name))
    {
        throw "Bad name";
    }
    mName = name;
}

template <typename Column, typename T>
Table<Column, T>::Table(const std::string &name, const std::vector<Column> &table) : mTable(table)
{
    SetName(name);
}

