//#include <tuple>
//using namespace std;
//
//struct tick_tock: component<start, tock> {
//    template <typename Context>
//    void handle(const start &message, Context context) override {
//        puts("tick");
//        context.sendDown(tick{});
//    }
//};
//
//struct responder: component<tick> {
//    template <typename Context>
//    void handle(const tick &message, Context context) override {
//        context.sendUp(tock{});
//    }
//};
//
//template<typename... Children_>
//struct component_base {
//    virtual void handle(const message_base &m) = 0;
//
//    tuple<Children_...> children;
//    component_base *parent;
//
//    void sendDown(message_base &message) {
//        hana::for_each([&] (auto &child){
//            child->handle(message);
//            child->sendDown(message);
//        });
//    }
//
//    void sendUp(message_base &message) {
//        if (!parent) {
//            return;
//        } else {
//            parent->handle(message);
//            parent->sendUp(message);
//        }
//    }
//};