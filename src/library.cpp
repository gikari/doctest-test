#include <iostream>

#include "library.hpp"

#include <doctest/doctest.h>

void Foo::bar() { std::cout << "Foo bar baz" << std::endl; }

TEST_CASE("Baz boo faz") { //
  CHECK(2 + 2 == 4);
}
