#include "array.h"

Array::Array()
{
    this->elements = 0;
    this->array = nullptr;
}

Array::Array(int elem)
{
    this->elements = elem;
    this->array = new double[elem];
}

Array::Array(Array &other)
{
    this->elements = other.elements;
    this->array = new double[this->elements];
    for (int i = 0; i < this->elements; i++){
         this->array[i] = other.array[i];
    }
}

Array::~Array()
{
    if(this->array){
        delete this->array;
    }
    delete this;
}

void Array::incElements()
{
    this->elements++;
}

bool Array::isIncluded(double elem)
{
    for (int i = 0; i < this->getElements(); i++){
        if (this->array[i] == elem){
            return true;
        }
    }
    return false;
}

void Array::addElem(double val)
{
    if (this->elements == 0) {
        this->elements = 1;
        this->array = new double[this->elements];
        this->array[0] = val;
        qDebug() << "added " << val << "\n";
    }
    else {
        Array* other = new Array(this->getElements());
        for (int i = 0; i < this->getElements(); i++){
            other->array[i] = this->array[i];
        }
        delete this->array;
        this->incElements();
        this->array = new double[this->elements];
        for (int i = 0; i < other->getElements(); i++){
            this->array[i] = other->array[i];
        }
        this->array[this->getElements() - 1] = val;
        qDebug() << "added " << val << "\n";
        }
}
