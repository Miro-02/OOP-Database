#include "IncludeFile.h"
#include "Column.h"

template <typename T>
void Column<T>::SetType(char ch)
{
    mType = ch;
}

template <typename T>
Column<T>::Column(/* args */)
{
    mType = 'n';
    mData = MyVector<T>();
    mName = MyString();
}

template <typename T>
void Column<T>::Add(const T *data)
{
    mData.Add(data);
    cout << "Added successfully" << endl;
}

template <typename T>
void Column<T>::Describe()
{
    cout << mName << " : " << mType << " ";
}
