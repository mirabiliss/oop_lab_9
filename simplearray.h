#ifndef SIMPLEARRAY_H
#define SIMPLEARRAY_H

#include "array.h"

class SimpleArray: public virtual Array
{
public:
    SimpleArray();
    SimpleArray(int elem);
    SimpleArray(SimpleArray& other);
    virtual ~SimpleArray();

    virtual void addElem(double val) override;
};

#endif // SIMPLEARRAY_H
