#ifndef CATALOG_H
#define CATALOG_H
#include "Column.h"
#include "MyVector.h"

template<typename Column>

class Catalog
{
private:

    MyVector<Column> mCatalog;
    
public:
    Catalog(/* args */);
    ~Catalog();
};



#endif