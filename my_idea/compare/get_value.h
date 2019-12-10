#ifndef LEARN_CPP_THE_HARD_WAY_GET_VALUE_H
#define LEARN_CPP_THE_HARD_WAY_GET_VALUE_H
class klazz {
public:
    explicit klazz(int i) {
        id = i;
    }

    void v_getId(int&);
    bool b_getId(int&);
    int i_getId();
private:
    int id;
};
#endif //LEARN_CPP_THE_HARD_WAY_GET_VALUE_H
