#pragma once

#include <ostream>

#include "config.h"

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    Vector(std::initializer_list<value> l);
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector operator+(const Vector& rhs);
    Vector operator-(const Vector& rhs);
    value operator*(const Vector& rhs);
    value& operator[](size_t size);
    value operator[](size_t size) const;
    size_t getSize() const;

private:
// Private Member functions here
    value data[NDIM];
    size_t size;

// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
Vector operator*(Vector& rhs, const value scalar);
Vector operator+=(Vector& rhs, const value scalar);
Vector operator*=(Vector& rhs, const value scalar);
std::ostream& operator<<(std::ostream&, const Vector& rhs );