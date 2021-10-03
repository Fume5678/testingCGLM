#include <iostream>
#include "MyMathLib/MyMathLib.h"

void assert_that(bool statement, std::string message) {
    if (!statement) {
        throw std::runtime_error{message};
    }
}

void run_test(void (*unit_test)(), const char* name) {
    try {
        unit_test();
        printf("[+] Test %s successful.\n", name);
    } catch (const std::exception& e) {
        printf("[-] Test failure in %s. %s.\n", name, e.what());
    }
}

// For tests
void TEST_vec_2_init() {
    myVec2 vec2{1};

    assert_that(vec2.get(0) == 1, "bad result");
}

void TEST_mat_2_init() {
    myMat2 mat2{1};

    assert_that(mat2.get(0, 0) == 1, "bad result");
    assert_that(mat2.get(1, 1) == 1, "bad result");
}

int main(int argc, char const* argv[]) {
    run_test(TEST_vec_2_init, "Vec2 init");
    run_test(TEST_mat_2_init, "Mat2 init");
    return 0;
}
