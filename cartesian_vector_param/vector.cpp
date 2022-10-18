#include <ostream>
#include<iostream>

#include "vector.h"

Vector::Vector()
{
    size = NDIM;
    for (size_t i = 0; i < size; i++)
    {
        data[i] = 0;
    }
}

Vector::Vector(std::initializer_list<value> l)
{
    size = l.size();
    int i = 0;

    for (auto& val : l)
    {
        data[i++] = val;
    }
}

size_t Vector::getSize() const
{
    return size;
}

Vector& Vector::operator+=(const Vector& rhs)
{
    for (int i = 0; i < rhs.getSize(); i++)
    {
        data[i] += rhs[i];

    }

    return *this;
}

Vector& Vector::operator-=(const Vector& rhs)
{
    for (int i = 0; i < rhs.getSize(); i++)
    {
        data[i] -= rhs[i];
    }

    return *this;
}

Vector Vector::operator+(const Vector& rhs)
{
    auto vec = Vector();

    for (int i = 0; i < rhs.getSize(); i++)
    {
        vec[i] = rhs[i] + (*this)[i];
    }

    return vec;
}

Vector Vector::operator-(const Vector& rhs)
{
    auto vec = Vector();

    for (int i = 0; i < rhs.getSize(); i++)
    {
        vec[i] = rhs[i] - (*this)[i];
    }

    return vec;
}

value Vector::operator*(const Vector& rhs)
{
    value vec = 0;

    for (int i = 0; i < rhs.getSize(); i++)
    {
        vec += rhs[i] * (*this)[i];
    }

    return vec;
}

value Vector::operator[](size_t size) const
{
    return data[size];
}

value& Vector::operator[](size_t size)
{
    return data[size];
}

Vector operator*(Vector& rhs,const value scalar)
{
    auto vec = Vector();

    for (int i = 0; i < rhs.getSize(); i++)
    {
        vec[i] = rhs[i] * scalar;
    }

    return vec;
}

Vector operator*=(Vector& rhs, const value scalar)
{
    for (int i = 0; i < rhs.getSize(); i++)
    {
        rhs[i] *= scalar;
    }

    return rhs;
}


Vector operator+=(Vector& rhs, const value scalar)
{
    for (int i = 0; i < rhs.getSize(); i++)
    {
        rhs[i] += scalar;
    }

    return rhs;
}

std::ostream& operator<<(std::ostream &os, const Vector& rhs)
{
    os << "{";

    for (int i = 0; i < rhs.getSize(); i++)
    {
        os << rhs[i] << (i == rhs.getSize() - 1 ? "" : ",");
    }

    return os << "}";
}