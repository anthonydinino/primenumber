#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>
using namespace std;

bool is_prime(unsigned long long num);

/**
 * @brief Calculates if number is prime and time taken
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " [number]" << endl;
        return 0;
    }
    unsigned long long num = strtoull(argv[1], nullptr, 10);
    if (errno == ERANGE)
    {
        errno = 0;
        std::cout << "Range error: Number is larger than 18446744073709551615" << endl;
        return 0;
    }
    if (num == 0)
    {
        std::cout << "Please enter a number above 0" << endl;
        return 0;
    }

    chrono::steady_clock::time_point begin = chrono::steady_clock::now();
    std::cout << argv[1] << " is " << (is_prime(num) ? "" : "not ") << "a Prime Number ";
    chrono::steady_clock::time_point end = chrono::steady_clock::now();

    std::cout << "(" << fixed << setprecision(5) << double(chrono::duration_cast<chrono::milliseconds>(end - begin).count() / double(1000)) << " seconds)" << endl;
    return 0;
}

/**
 * @brief
 * Uses the square root method for calculation
 * Big O Notation: O(sqrt(n))
 *
 * @param num
 * @return true
 * @return false
 */
bool is_prime(unsigned long long num)
{
    if (num == 2)
    {
        return true;
    }
    if (num < 2 || num % 2 == 0)
    {
        return false;
    }
    unsigned long long s = floor(sqrt(num)) + 1;
    for (size_t i = 3; i < s; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
