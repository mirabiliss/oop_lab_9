#include "base.h"

Base::Base()
{
}

Base::~Base()
{
    delete this;
}

int Base::getElements() const
{
    return elements;
}

void Base::setElements(int value)
{
    elements = value;
}
