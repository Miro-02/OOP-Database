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
        mData[i] = *data;
    }
}

template <typename T>
void MyVector<T>::Free()
{
    delete[] this->mData;
}

template <typename T>
void MyVector<T>::CopyOther(const MyVector<T> &other)
{
    SetSize(other.mSize);
    SetCapacity(mSize * 2);
    mData = new T[mCapacity];
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
    if (this == &other)
    {
        return *this;
    }
    Free();
    CopyOther(other);
    return *this;
}
template <typename T>

MyVector<T>::MyVector(const MyVector<T> &other)
{
    CopyOther(other);
}
template <typename T>
void MyVector<T>::Resize()
{
    T *newVector = new T[mCapacity * 2];
    for (size_t i = 0; i < mSize; i++)
    {
        newVector[i] = mData[i];
    }
    delete[] mData;
    mData = newVector;
    SetCapacity(mSize * 2);
}

template <typename T>
bool MyVector<T>::ShouldBeResized(unsigned int value) const
{
    if (value > mCapacity)
    {
        return true;
    }
    return false;
}

template <typename T>
void MyVector<T>::Add(const T *data)
{
    if (ShouldBeResized(mSize + 1))
    {
        Resize();
    }
    mData[mSize] = *data;
    mSize++;
}

template <typename T>
void MyVector<T>::Add(const T &&data)
{
    if (ShouldBeResized(mSize + 1))
    {
        Resize();
    }
    mData[mSize] = data;
    mSize++;
}
template <typename T>
ostream &operator<<(ostream &stream, const MyVector<T> &other)
{
    for (size_t i = 0; i < other.mSize; i++)
    {
        stream << other.mData[i] << " ";
    }
    return stream;
}
template <typename T>
bool MyVector<T>::CheckValue(const T *data, unsigned int y)
{
    if(y>mSize)
    {
        cout<<"Out of index"<<endl;
        return false;
    }

    if (mData[y]==data)
    {
        return true;
    }
    return false;
    
}

// int main(int argc, char const *argv[])
// {
//     MyVector<int> vector = MyVector<int>();
//     vector.Add(5);
//     vector.Add(3);
//     return 0;
// }
