#ifndef TABLE_H
#define TABLE_H
#include "Column.h"
#include "MyVector.h"
#define PAGECOUNT 10
template<typename Column, typename T>

class Table
{
private:
    MyString mName;
    MyVector<Column> mTable;

public:

    Table(/* args */);
    Table(const char* name, MyVector<Column> table);
    void AddInColumn(const T* data, unsigned int index);
    void Describe();

    void SetType(unsigned int columnID, char ch); 
    bool IsValueIn(T data, unsigned int y);
    const MyString& GetName() void;
    void AddColumn(const MyString& columnName, char columnType);
    void DeleteRow(unsigned int columnID, T *data);
    void Print(const char* name);
    std::ostream& Export(const char* name, std::ostream& stream);
    void SelectRow(unsigned int columnID, const T* data, char* name);
    //void Update();
};




#endif