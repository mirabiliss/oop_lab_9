#ifndef SORTEDARRAY_H
#define SORTEDARRAY_H
#include "simplearray.h"

class SortedArray: public virtual Base, public SimpleArray
{
public:
    SortedArray();
    SortedArray(int elem);
    SortedArray(SortedArray& other);
    ~SortedArray();

    void addElem(double val) override;
    bool isIncluded(double elem) override;
};

#endif // SORTEDARRAY_H
