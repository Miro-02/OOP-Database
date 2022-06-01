#ifndef COLUMN_H
#define COLUMN_H
#include "IncludeFile.h"

template<typename T>
class Column
{
private:
    char mType;
    MyVector<T> mData;
    MyName mName;

public:
    Column(/* args */);
    void Add(const T* data);
    void Describe();
    void SetType(char ch); 
    bool IsValueIn(T data, unsigned int y);
};



#endif