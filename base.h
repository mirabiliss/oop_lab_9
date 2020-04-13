#ifndef BASE_H
#define BASE_H


class Base
{
public:
    Base();
    virtual ~Base();

    int getElements() const;
    void setElements(int value);

    virtual void addElem(double val) = 0;

    double* array;

protected:
    int elements;
};

#endif // BASE_H
