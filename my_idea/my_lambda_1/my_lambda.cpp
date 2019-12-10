//#include <vector>
//#include <iostream>
//#include <numeric>
//#include <string>
//#include <optional>
//
//void printStringLine(std::string s) {
//    std::cout << s << '\n';
//}
//
//template<typename T>
//concept Magma = requires(T a)
//{
//    { a + a } -> T; // a binary operator that returns the same Type
//// define operator+ for your Type if you get an error here
//};
//
//template<Magma T>
//std::optional <T> operator+(std::optional <T> first, std::optional <T> second) {
//    if (first)
//        if (second)
//            return std::make_optional(first.value() + second.value());
//        else
//            return first;
//    else
//        return second;
//}
//
//std::string fizzBuzzOrNumber(int n) {
//    // what should this function be called?
//    auto maybeStringWhenNMatchesDivisor = [n](int divisor, std::string s) {
//        return (n % divisor) == 0 ? std::make_optional(s) : std::nullopt;
//    };
//    auto maybeFizz = maybeStringWhenNMatchesDivisor(3, "Fizz");
//    auto maybeBuzz = maybeStringWhenNMatchesDivisor(5, "Buzz");
//    return (maybeFizz + maybeBuzz).value_or(std::to_string(n));
//}
//
//int main() {
//    std::vector<int> nums(100);
//    std::iota(begin(nums),
//              end(nums),
//              1);
//
//    for (auto n : nums)
//        printStringLine(fizzBuzzOrNumber(n));
//
//    return 0;
//}