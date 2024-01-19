#include <iostream>
#include <memory>

std::unique_ptr<int[]> expandArray(int, int *);

int main()
{

    const int INDEX = 5;
    int array[INDEX] = {1, 2, 3, 4, 5};
    std::unique_ptr<int[]> arrPtr = expandArray(INDEX, array);

    for (int i = 0; i < INDEX * 2; i++)
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
            arrPtr[i] = array[i];
        else
            arrPtr[i] = 0;
    }

    return arrPtr;
}