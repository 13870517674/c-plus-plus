#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

int main()
{
    using namespace std::literals;
    const auto bits = { "https:"sv, "//"sv, "cppreference"sv, "."sv, "com"sv };
    for (char const c : bits | std::views::join) std::cout << c;
    std::cout << '\n';

    const std::vector<std::vector<int>> v{ {1,2}, {3,4,5}, {6}, {7,8,9} };
    auto jv = std::ranges::join_view(v);
    for (auto const  e : jv) std::cout << e << ' ';
    std::cout << '\n';

    int array[5][5]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };
    for (int c : array | std::views::join)std::cout << c<<' ';
}
/*1) 表示由从拉平范围的视图获得的序列组成的 view 。
2) 范围适配器对象。对于任何适合的子表达式 e 表达式 views::join(e) 表达式等价于 join_view<views::all_t<decltype((e))>>{e}*/