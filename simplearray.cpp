#include "simplearray.h"

SimpleArray::SimpleArray()
    :Array()
{
}

SimpleArray::SimpleArray(int elem)
    :Array(elem)
{
}

SimpleArray::SimpleArray(SimpleArray &other)
    :Array(other)
{
}

SimpleArray::~SimpleArray()
{
    if(this->array){
        delete this->array;
    }
    delete this;
}

void SimpleArray::addElem(double val)
{
    this->Array::addElem(val);
}
