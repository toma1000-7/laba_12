#pragma once
#include <string>

// через namespace замість extern
namespace MyApp {
    extern long long number;
    extern long long sum;
    extern long long product;
    extern int count;
}

void inputData();
void processData();
void displayResult();
