#ifndef COLUMN_H
#define COLUMN_H
#include <vector>
#include <string>
#include "CheckName.cpp"

enum type
{
    string = 0,
    integer,
    floating
};

template <typename T>
class Column
{
protected:
    type mType;
    std::string mName;
    std::vector<T> mColumn;

public:
    Column(/* args */) = default;
    Column(type type, const std::string& name, const std::vector<T>& vector);
    Column(type type, const std::string& name);

    void SetType(type type);
    void SetName(const std::string &name);

    const T *GetAt(unsigned int index) const;
    const std::string &GetName() const;
    type GetType() const;
    void Add(const T *data);
    void Describe() const;

    bool IsValueIn(const T *data) const;

    void DeleteAt(unsigned int index);
    void ChangeAt(unsigned int index, const T *value);
    virtual ~Column();
};

int main(int argc, char const *argv[])
{
    Column<str> column;
    return 0;
}


#endif