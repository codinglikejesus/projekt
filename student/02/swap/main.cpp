#include <cstdlib>
#include <iostream>

// TODO: Kirjoita funktion swap maarittely tahan
void swap(int& i,int& j){
    int x = 0;
    x = i;
    i = j;
    j = x;

}

int main()
{
    std::cout << "Enter an integer: ";
    int i = 0;
    std::cin >> i;

    std::cout << "Enter another integer: ";
    int j = 0;
    std::cin >> j;

    swap(i, j);
    std::cout << "The integers are " << i << " and " << j << std::endl;

    return EXIT_SUCCESS;
}
