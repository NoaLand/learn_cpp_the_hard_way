//#include <cstdio>
//#include <type_traits>
//#include <tuple>
//#include <concepts>
//
//template<template<typename ...> typename Template, typename... Args>
//constexpr bool is_specialization_of_v = false;
//
//template<template<typename ...> typename Template, typename... Args>
//constexpr bool is_specialization_of_v<Template, Template<Args...>> = true;
//
//template<typename T>
//concept Node = std::is_object_v<T>;
//
//template<typename T>
//concept Tree = requires (T t) {
//    {t.root} -> Node;
//    {T::childCount} -> std::convertible_to<size_t>;
//    requires T::childCount == 0 || requires {
//        t.template child<0>();
//    };
//};
//
//template<Node Root_, Tree... Children_>
//struct tree {
//    Root_ root;
//    std::tuple<Children_...> children;
//    static constexpr std::size_t childCount = sizeof...(Children_);
//
//    tree() = default;
//
//    tree(std::convertible_to<Root_> root) : root {std::forward<decltype(root)>(root)} {
//
//    }
//
//    template<std::size_t index_>
//    requires (index_ < sizeof...(Children_))
//    Tree auto &child() {
//        return std::get<index_>(children);
//    }
//};
//
//template<Tree Tree_, typename TreeLocation_>
//struct context {
//    Tree_ &tree;
//    TreeLocation_ &location;
//};
//
//template<typename T>
//concept Context = true;
//
//struct start {
//};
//struct tick {
//};
//struct tock {
//};
//
//struct tick_tock {
//    void handle(const start &message, Context auto context) {
//        puts("tick: ");
//        context.sendDown(tick{});
//    }
//
//    void handle(const tock &message, Context auto context) {
//        puts("tock!");
//    }
//};
//
//struct responder {
//    void handle(const tick &message, Context auto context) {
//        context.sendUp(tock{});
//    }
//};
//
//int main() {
//    tree<int, tree<int>> t;
//    return t.child<0>().root;
////    tick_tock{}.handle(start{}, 1);
//}
