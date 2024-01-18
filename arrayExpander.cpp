#include <iostream>
#include <memory>

std::unique_ptr<int[]> expandArray(int, int *);

int main()
{

    const int index = 5;
    int array[index] = {1, 2, 3, 4, 5};
    std::unique_ptr<int[]> arrPtr = expandArray(index, array);

    for (int i = 0; i < index * 2; i++)
    {

        std::cout << arrPtr[i] << std::endl;
    }

    return 0;
}

std::unique_ptr<int[]> expandArray(int index, int *array)
{
    std::unique_ptr<int[]> arrPtr(new int[index * 2]);

    for (int i = 0; i < index * 2; i++)
    {

        if (i < index)
        {
            arrPtr[i] = array[i];
        }
        else
        {
            arrPtr[i] = 0;
        }
    }

    return arrPtr;
}