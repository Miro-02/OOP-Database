#include "Column.h"
#ifndef STRINGCOLUMN_H
#define STRINGCOLUMN_H

class StringColumn : public Column<std::string>
{
private:
    /* data */
public:
    StringColumn(/* args */);
    ~StringColumn();
};



#endif