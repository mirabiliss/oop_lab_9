#ifndef ARRAY_H
#define ARRAY_H

#include "base.h"
#include <QDebug>

class Array: public virtual Base
{
public:
    Array();
    Array(int elem);
    Array(Array& other);
    virtual ~Array();

    void incElements();
    virtual bool isIncluded(double elem);
    virtual void addElem(double val) override;
};

#endif // ARRAY_H
