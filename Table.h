#ifndef TABLE_H
#define TABLE_H
#include "Column.h"
#define PAGECOUNT 10
template <typename Column, typename T>

class Table
{
private:
    std::string mName;
    std::vector<Column> mTable;

public:
    Table(/* args */) = default;
    Table(const std::string &name, const std::vector<Column>& table);
    // void SetNameColumn(const std::string& name, unsigned int columnID);

    void SetName(const std::string &name);
    void AddInColumn(const T *data, unsigned int columnID, unsigned int rowID);
    void Describe() const;
    bool IsValueIn(unsigned int columnID, const T *data) const;
    const std::string &GetName() const;
    void AddColumn(const std::string &columnName, type columnType);
    void DeleteRow(unsigned int columnID, const T *data);
    void Print(const std::string &name);
    std::ostream &Export(const std::string &name, std::ostream &stream);

    // void SelectRow(unsigned int columnID, const T* data, char* name);
    // void Update();
};

// template <typename Column, typename T>

// void Table<Column, T>::AddInColumn(const T *data, unsigned int columnID, unsigned int rowID)
// {
//     mTable[columnID][5;
// }

#endif