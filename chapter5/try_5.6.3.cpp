#include "std_lib_facilities.h"

void throw_error() {
  error("you hit an error");
}

int main() {
  throw_error();
}
