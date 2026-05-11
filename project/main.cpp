#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    try {
        inputData();
        processData();
        displayResult();
    }
    catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}
