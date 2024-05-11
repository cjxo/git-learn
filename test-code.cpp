#include <iostream>
#include <ranges>

int main() {
    std::ranges::for_each(std::array{ 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd' },
						  [](char c) { std::cout << c; });
    return 0;
}
