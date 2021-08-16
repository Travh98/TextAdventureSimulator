#include "NameGenerator.h"
#include <string>
#include <random>
#include <time.h>
#include <iostream>

NameGenerator::NameGenerator()
{
    srand(time(NULL));  // Initialize seed
}

std::string NameGenerator::generateName(int length)
{
    std::string name;
    std::default_random_engine generator(rand());  // Feed seed to generator

    for(int i = 0; i < length; i++)
    {
        std::uniform_int_distribution<int> distribution(97, 122);
        int asciiDecimal = distribution(generator);  // Generates number in range 97 ... 122
        char letter = static_cast<char>(asciiDecimal);
        name += letter;

        // Capitalize first letter
        if(i == 0)
        {
            name[i] = static_cast<char>(static_cast<int>(letter) - 32);
        }
    }

    // Make sure there are vowels and constanantantsants
    for(int i = 0; i < length; i++)
    {
        if(i > 1)  // After two letters
        {
            int lastDecimal = static_cast<int>(name[i - 1]);
            int lastLastDecimal = static_cast<int>(name[i - 2]);

            // If last two letters are constants
            if(!(lastDecimal == 97 || lastDecimal == 101 || lastDecimal == 105 || lastDecimal == 111 || lastDecimal == 117)
                &&
                !(lastLastDecimal == 97 || lastLastDecimal == 101 || lastLastDecimal == 105 || lastLastDecimal == 111 || lastLastDecimal == 117))
            {
                std::uniform_int_distribution<int> vowels(0, 4);
                int vowelNum = vowels(generator);
                char vowel;
                switch(vowelNum)
                {
                    case 0: vowel = 'a'; break;
                    case 1: vowel = 'e'; break;
                    case 2: vowel = 'i'; break;
                    case 3: vowel = 'o'; break;
                    case 4: vowel = 'u'; break;
                    // case 5: vowel = 'y'; break;
                    default:
                    std::cout << "you fucked up in the vowel generator";
                    break;
                }
                name[i] = vowel;
            }
        }
    }
    return name;
}