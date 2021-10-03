#include "MyMathLib.h"
#include <stdexcept>

myVec2::myVec2() : vector2{} {}

myVec2::myVec2(float val) : vector2{val} {}

myVec2::myVec2(const myVec2& other) : vector2{other.vector2} {}

myVec2 myVec2::operator+(const myVec2& other) {
    myVec2 newVec;
    newVec.vector2 = vector2 + other.vector2;

    return newVec;
}

myVec2 myVec2::operator+(float val) {
    float  fval = static_cast<float>(val);
    myVec2 newVec;
    newVec.vector2 = vector2 + val;
    return newVec;
}

myVec2 myVec2::operator-(const myVec2& other) {
    myVec2 newVec;
    this-> operator-(other);

    return newVec;
}

myVec2 myVec2::operator-(float val) {
    myVec2 newVec;
    newVec.vector2 = vector2 - val;
    return newVec;
}

myVec2& myVec2::operator=(const myVec2& other) {
    vector2 = other.vector2;
    return *this;
}

float myVec2::get(int ind) {
    if (ind < 0 || ind > 1) {
        throw std::range_error{"Index out of range"};
    }
    return vector2[ind];
}

// Vec 3
//------------------------------------

myVec3::myVec3() : vector3{} {}

myVec3::myVec3(float val) : vector3{} {}

myVec3::myVec3(const myVec3& other) : vector3{other.vector3} {}

myVec3 myVec3::operator+(const myVec3& other) {
    myVec3 newVec;
    newVec.vector3 = vector3 + other.vector3;

    return newVec;
}

myVec3 myVec3::operator+(float val) {
    myVec3 newVec;
    newVec.vector3 = vector3 + val;
    return newVec;
}

myVec3 myVec3::operator-(const myVec3& other) {
    myVec3 newVec;
    this-> operator-(other);

    return newVec;
}

myVec3 myVec3::operator-(float val) {
    myVec3 newVec;
    newVec.vector3 = vector3 - val;
    return newVec;
}

myVec3& myVec3::operator=(const myVec3& other) {
    vector3 = other.vector3;
    return *this;
}

float myVec3::get(int ind) {
    if (ind < 0 || ind > 2) {
        throw std::range_error{"Index out of range"};
    }
    return vector3[ind];
}

// Mat2
//-----------------------------
myMat2::myMat2() : mat2{} {}

myMat2::myMat2(float val) : mat2{val} {}

myMat2::myMat2(const myMat2& other) : mat2{other.mat2} {}

myMat2 myMat2::operator*(float val) {
    myMat2 newMat;
    newMat.mat2 = mat2 * val;
    return newMat;
}

myMat2 myMat2::operator+(const myMat2& other) {
    myMat2 newMat;
    newMat.mat2 = mat2 + other.mat2;
    return newMat;
}

myMat2 myMat2::operator-(const myMat2& other) {
    myMat2 newMat;
    newMat.mat2 = mat2 - other.mat2;
    return newMat;
}

myMat2& myMat2::operator=(const myMat2& other) {
    mat2 = other.mat2;
    return *this;
}

float myMat2::get(int x, int y) {
    if (x < 0 || x > 1 || y < 0 || y > 1) {
        throw std::range_error{"Index out of range"};
    }

    return mat2[x][y];
}

// Mat3
//-----------------------------
myMat3::myMat3() : mat3{} {}

myMat3::myMat3(float val) : mat3{val} {}

myMat3::myMat3(const myMat3& other) : mat3{other.mat3} {}

myMat3 myMat3::operator*(float val) {
    myMat3 newMat;
    newMat.mat3 = mat3 * val;
    return newMat;
}

myMat3 myMat3::operator+(const myMat3& other) {
    myMat3 newMat;
    newMat.mat3 = mat3 + other.mat3;
    return newMat;
}

myMat3 myMat3::operator-(const myMat3& other) {
    myMat3 newMat;
    newMat.mat3 = mat3 - other.mat3;
    return newMat;
}

myMat3& myMat3::operator=(const myMat3& other) {
    mat3 = other.mat3;
    return *this;
}

float myMat3::get(int x, int y) {
    if (x < 0 || x > 2 || y < 0 || y > 2) {
        throw std::range_error{"Index out of range"};
    }

    return mat3[x][y];
}