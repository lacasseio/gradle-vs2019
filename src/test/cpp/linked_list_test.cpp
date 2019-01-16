#include "linked_list.h"

#include <cassert>

void test_constructor() {
    linked_list list;
    assert(list.size() == 0);
}

void test_add() {
    linked_list list;

    list.add("one");
    assert(list.size() == 1);
    assert(list.get(0) == "one");

    list.add("two");
    assert(list.size() == 2);
    assert(list.get(1) == "two");
}

void test_remove() {
    linked_list list;

    list.add("one");
    list.add("two");
    assert(list.remove("one"));

    assert(list.size() == 1);
    assert(list.get(0) == "two");

    assert(list.remove("two"));
    assert(list.size() == 0);
}

void test_remove_missing() {
    linked_list list;

    list.add("one");
    list.add("two");
    assert(!list.remove("three"));
    assert(list.size() == 2);
}

int main(int argc, char** argv) {
    test_constructor();
    test_add();
    test_remove();
    test_remove_missing();
    return 0;
}
