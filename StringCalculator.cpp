#include "StringCalculator.h"

bool checkIsEmpty(string input)
{
    bool result = false;
    if (input.empty()) {
        result = true;
    }
    return result;
}

bool checkIsNotNumber(string input)
{
    bool result = false;
    for (char ch : input) {
        if (!isdigit(ch)) {
            result = true;
            break;
        }
    }
    return result;
}


int add(string input)
{
    int result = -1;
    if(checkIsEmpty(input) || checkIsNotNumber(input))
    {
        result = 0;
    }
    return result;
}
