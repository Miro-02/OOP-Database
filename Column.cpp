#include "Column.h"
#include <iostream>

// template <typename T>

// Column<T>::Column()
// {

// }

template <typename T>
Column<T>::Column(type type, const std::string &name, const std::vector<T> &vector) : mType(type), mColumn(vector)
{
    SetName(name);
}

template <typename T>
Column<T>::Column(type type, const std::string& name) : mType(type)
{
    SetName(name);
}

template <typename T>
void Column<T>::SetName(const std::string &name)
{
    if(!IsNameGood(name))
    {
        throw "Bad name";
    }
    mName = name;
}

// template <typename T>
// void Column<T>::SetType(type type)
// {
//     mType = type;
// }

template <typename T>

const T *Column<T>::GetAt(unsigned int index) const
{
    return mColumn[index];
}

template <typename T>
const std::string &Column<T>::GetName() const
{
    return mName;
}

template <typename T>
type Column<T>::GetType() const
{
    return mType;
}

template <typename T>
void Column<T>::Add(const T *data)
{
    mColumn.push_back(data);
    std::cout << "Added successfully" << std::endl;
}

template <typename T>
void Column<T>::Describe() const
{
    std::cout << mName << " : " << mType << std::endl;
}

template <typename T>
bool Column<T>::IsValueIn(const T *data) const
{
    for (size_t i = 0; i < mColumn.size(); i++)
    {
        if (mColumn[i] == data)
        {
            return true;
        }
    }
    return false;
}

template <typename T>
void Column<T>::DeleteAt(unsigned int index)
{
    mColumn.erase(index);
}

template <typename T>
void Column<T>::ChangeAt(unsigned int index, const T *value)
{
    mColumn[index] = value;
}