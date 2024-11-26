#include "StringCalculator.h"

int add(string input)
{
    if (input.empty()) {
        return 0;
    }

    for (char ch : input) {
        if (!isdigit(ch)) {
            return 0;
        }
    }
    
  throw "invalid argument";
}
