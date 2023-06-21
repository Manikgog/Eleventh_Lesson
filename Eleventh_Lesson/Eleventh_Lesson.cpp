#include <iostream>
#include "log_duration.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    {
        LOG_DURATION("Прединкремент.");
        for (int i = 0; i < 1000000000; ++i)
        {

        }
    }

    {
        LOG_DURATION("Постинкремент.");
        for (int i = 0; i < 1000000000; i++)
        {

        }
    }
}


