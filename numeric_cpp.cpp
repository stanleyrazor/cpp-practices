#include <iostream>
#include <numeric>
#include <vector>

int main() {
    int n = 10;
    std::vector<int> numbers(n - 1);
    std::iota(numbers.begin(), numbers.end(), 1);

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0,
                              [](int acc, int num) { return (num % 2 == 0) ? acc + num : acc; });

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
