#ifndef INTCOLUMN_H
#define INTCOLUMN_H
#include "Column.h"

class IntColumn : public Column<int>
{
private:
    /* data */
public:
    IntColumn(/* args */);
    IntColumn(const std::string& name);
    ~IntColumn();
};
#endif