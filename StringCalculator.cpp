#include "StringCalculator.h"

bool checkIsEmpty(string input)
{
    bool result = FALSE;
    if (input.empty()) {
        result = TRUE;
    }
    return result;
}

bool checkIsNotNumber(string input)
{
    bool result = FALSE;
    for (char ch : input) {
        if (!isdigit(ch)) {
            result = TRUE;
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
