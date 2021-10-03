# testingCGLM
Для сборки проекта нужен cmake 3.11+

Если cmake установлен, то нужно перейти в папку проекта и прописать следующие команды 
```
  mkdir build
  cd build
  cmake ..
```

Если проект сгенерирован для visual studio, то в папке билда запустить проектный файл.

### Документация проекта
myVec2() - вектор размерностью 2
Методы:
* myVec2() – стандартный конструктор;
* myVec2(float) – конструктор принимающий начальное значение;
* myVec2(const myVec2&) – конструктор копирования;
* myVec2 operator+(const myVec2&) – прибавление вектора;
* myVec2 operator+(float val) – прибавка val к каждому элементу вектора;
* myVec2 operator-(const myVec2&) – вычитание вектора;
* myVec2 operator-(float val) – вычитание val из каждого элемента вектора;
* myVec2 operator=(const myVec2&) – заменяет содержимое вектора;
* myVec2 operator=(const myVec2&) – заменяет содержимое вектора;
* void set(int ind, float val) – заменяет значение на месте ind значением val. Может вернуть исключение std::range_error;
* float get(int ind) – возвращает значение на месте ind. Может вернуть исключение std::range_error;
* friend bool operator==(const myVec2& a, const myVec2& b) – дружественная функция сравнения двух векторов.

MyVec3() – вектор размерностью 3
Методы:
    - myVec3() – стандартный конструктор;
    - myVec3(float) – конструктор принимающий начальное значение;
    - myVec3(const myVec3&) – конструктор копирования;
    - myVec3 operator+(const myVec3&) – прибавление вектора;
    - myVec3 operator+(float val) – прибавка val к каждому элементу вектора;
    - myVec3 operator-(const myVec3&) – вычитание вектора;
    - myVec3 operator-(float val) – вычитание val из каждого элемента вектора;
    - myVec3 operator=(const myVec3&) – заменяет содержимое вектора;
    - myVec3 operator=(const myVec3&) – заменяет содержимое вектора;
    - void set(int ind, float val) – заменяет значение на месте ind значением val. Может вернуть исключение std::range_error;
    - float get(int ind) – возвращает значение на месте ind. Может вернуть исключение std::range_error;
    - friend bool operator==(const myVec3& a, const myVec3& b) – дружественная функция сравнения двух векторов.

MyMat2() – матрица размерностью 2
Методы:
    - myVec3() – стандартный конструктор;
    - myMat2(float) – конструктор принимающий начальное значение;
    - myMat2(const myVec3&) – конструктор копирования;
    - myMat2 operator+(const myMat2&) – прибавление матрицы;
    - myMat2 operator+(float val) – прибавка val к каждому элементу матрицы;
    - myMat2 operator-(const myMat2&) – вычитание вектора;
    - myMat2 operator-(float val) – вычитание val из каждого элемента матрицы;
    - myMat2 operator=(const myMat2&) – заменяет содержимое матрицы;
    - myMat2 operator=(const myMat2&) – заменяет содержимое матрицы;
    - void set(int x, int y, float val) – заменяет значение на месте [x, y] значением val. Может вернуть исключение std::range_error;
    - float get(int x, int y) – возвращает значение на месте [x, y]. Может вернуть исключение std::range_error;
    - friend bool operator==(const myMat2& a, const myMat2& b) – дружественная функция сравнения двух матриц.

MyMat3() – матрица размерностью 3
Методы:
    - myVec3() – стандартный конструктор;
    - myMat3(float) – конструктор принимающий начальное значение;
    - myMat3(const myVec3&) – конструктор копирования;
    - myMat3 operator+(const myMa3&) – прибавление матрицы;
    - myMat3 operator+(float val) – прибавка val к каждому элементу матрицы;
    - myMat3 operator-(const myMat3&) – вычитание вектора;
    - myMat3 operator-(float val) – вычитание val из каждого элемента матрицы;
    - myMat3 operator=(const myMat3&) – заменяет содержимое матрицы;
    - myMat3 operator=(const myMat3&) – заменяет содержимое матрицы;
    - void set(int x, int y, float val) – заменяет значение на месте [x, y] значением val. Может вернуть исключение std::range_error;
    - float get(int x, int y) – возвращает значение на месте [x, y]. Может вернуть исключение std::range_error;
    - friend bool operator==(const myMat3& a, const myMat3& b) – дружественная функция сравнения двух матриц.
