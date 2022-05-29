#include "MyVector.h"

template <typename T>
void MyVector<T>::SetSize(unsigned int other)
{
    mSize = other;
}

template <typename T>
void MyVector<T>::SetCapacity(unsigned int other)
{
    mCapacity = other;
}

template <typename T>
void MyVector<T>::SetData(const T *data)
{
    for (size_t i = 0; i < mSize; i++)
    {
        mData[i] = data;
    }
}

template <typename T>
void MyVector<T>::Free()
{
    delete[] mData;
}

template <typename T>
void MyVector<T>::CopyOther(const MyVector<T> &other)
{
    SetSize(other.mSize);
    SetCapacity(other.mCapacity);
    mData = new MyVector<T>[mCapacity];
    SetData(other.mData);
}

template <typename T>
MyVector<T>::MyVector(/* args */)
{
    mData = new T[1];
    mSize = 0;
    mCapacity = 1;
}

template <typename T>
MyVector<T>::~MyVector()
{
    Free();
}

template <typename T>
MyVector<T> &MyVector<T>::operator=(const MyVector<T> &other)
{
    Free();
    CopyOther(other);
}
template <typename T>

MyVector<T>::MyVector(const MyVector<T> &other)
{
    CopyOther(other);
}
