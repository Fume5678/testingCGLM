#include <glm/mat3x3.hpp>
#include <glm/mat2x2.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

// Vec2
class myVec2 {
    glm::vec2 vector2;

public:
    myVec2();

    myVec2(float val);

    myVec2(const myVec2& other);

    myVec2 operator+(const myVec2& other);

    myVec2 operator+(float val);

    myVec2 operator-(const myVec2& other);

    myVec2 operator-(float val);

    myVec2& operator=(const myVec2& other);

    float get(int ind);

    friend bool operator==(const myVec2& a, const myVec2& b) {
        return a.vector2 == b.vector2;
    }
};

// Vec3
class myVec3 {
    glm::vec3 vector3;

public:
    myVec3();

    myVec3(float val);

    myVec3(const myVec3& other);

    myVec3 operator+(const myVec3& other);

    myVec3 operator+(float val);

    myVec3 operator-(const myVec3& other);

    myVec3 operator-(float val);

    myVec3& operator=(const myVec3& other);

    float get(int ind);

    friend bool operator==(const myVec3& a, const myVec3& b) {
        return a.vector3 == b.vector3;
    }
};

// Mat3
class myMat2 {
    glm::mat2x2 mat2;

public:
    myMat2();

    myMat2(float val);

    myMat2(const myMat2& other);

    myMat2 operator+(const myMat2& other);

    myMat2 operator*(float val);

    myMat2 operator-(const myMat2& other);

    myMat2& operator=(const myMat2& other);

    float get(int x, int y);

    friend bool operator==(const myMat2& a, const myMat2& b) {
        return a.mat2 == b.mat2;
    }
};

// Mat3
class myMat3 {
    glm::mat3x3 mat3;

public:
    myMat3();

    myMat3(float val);

    myMat3(const myMat3& other);

    myMat3 operator+(const myMat3& other);

    myMat3 operator*(float val);

    myMat3 operator-(const myMat3& other);

    myMat3& operator=(const myMat3& other);

    float get(int x, int y);

    friend bool operator==(const myMat3& a, const myMat3& b) {
        return a.mat3 == b.mat3;
    }
};
