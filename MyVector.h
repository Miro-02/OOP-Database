#ifndef MYVECTOR_H
#define MYVECTOR_H
#include "IncludeFile.h"

template <typename T>
class MyVector
{
private:
    T *mData;
    unsigned int mSize;
    unsigned int mCapacity;
    void Free();
    bool ShouldBeResized(unsigned int value) const;
    void Resize();
    void CopyOther(const MyVector<T> &other);
    // void CopyOther(const MyVector<char*> &other);
    // void SetData(const char **data);
    void SetData(const T *data);
    void SetSize(unsigned int other);
    void SetCapacity(unsigned int other);
    bool CheckValue(const T* data, unsigned int y);
public:
    MyVector(/* args */);
    MyVector(unsigned int capacity);
    MyVector(const MyVector<T> &other);
    // MyVector(const MyVector<char*> other);
    MyVector<T> &operator=(const MyVector<T> &other);
    void Add(const T *data);
    // MyVector<T>& operator=(const MyVector<char*> other);
    template<typename U>
    friend std::ostream &operator<<(std::ostream &stream, const MyVector<T> &other);
    void Add(const T&&data);

    ~MyVector();
};



// template <>
// void MyVector<MyString>::CopyOther(const MyVector<char*> other)
// {
//     SetSize(other.mSize);
//     SetCapacity(other.mCapacity);
//     mData = new MyVector<T>[mCapacity];
//     SetData(other.mData);
// }

// template <typename T>
// void MyVector<T>::SetData(const char **data)
// {
//     for (size_t i = 0; i < mSize; i++)
//     {
//         strcpy(mData[i], data[i]);
//     }
// }

// template <typename T>
// MyVector<T>::MyVector(const MyVector<T> &other)
// {
//     mData = new MyVector<T>[mCapacity];
//     SetData(other.mData);
// }

#endif