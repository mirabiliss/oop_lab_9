#include "sortedarray.h"

SortedArray::SortedArray()
    :Array()
{
}

SortedArray::SortedArray(int elem)
    :Array(elem)
{
}

SortedArray::SortedArray(SortedArray &other)
    :Array(other)
{
}

SortedArray::~SortedArray()
{
    if (this->array)
        delete this->array;
    delete this;
}

void SortedArray::addElem(double val)
{
    if (this->elements == 0) {
        this->elements = 1;
        this->array = new double[this->elements];
        this->array[0] = val;
        qDebug() << "added " << val << "\n";
        return;
    }
    if (this->isIncluded(val)){
        qDebug() << "element " << val << " already exists.\n";
        return;
    }
    SortedArray* other = new SortedArray(this->getElements());
    for (int i = 0; i < this->getElements(); i++){
        other->array[i] = this->array[i];
    }
    delete this->array;
    this->incElements();
    this->array = new double[this->getElements()];

    int i = 0;
    while (other->array[i] < val && i != other->getElements()){
        this->array[i] = other->array[i];
        i++;
    }
    this->array[i] = val;
    if (i < this->getElements()) {
        for (int j = i + 1; j < this->getElements(); j++){
            this->array[j] = other->array[j - 1];
        }
    }
    qDebug() << "added " << val << "\n";
}

bool SortedArray::isIncluded(double elem)
{
    for (int i = 0; i < this->getElements(); i++){
        if (this->array[i] == elem){
            return true;
        }
    }
    return false;
}
