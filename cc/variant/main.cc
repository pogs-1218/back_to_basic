#include <cstdio>
#include <string>
#include <variant>

struct Node {
  double a;
};

enum Type { ptr, num };

union Value {
  Node* p;
  int i;
};

struct Entry {
  //std::string name;
  char name[16];
  Type t;
  Value v;
};

void f(Entry* pe) {
  if(pe->t == num) printf("%d\n", pe->v.i);
  else printf("%.3f\n", pe->v.p->a);
}

namespace cc {

struct Entry {
  char name[16];
  std::variant<Node*, int> v;
};

void f(Entry* pe) {
  if(std::holds_alternative<int>(pe->v))
    printf("%d\n", std::get<int>(pe->v));
}

}

int main(void) {
  Entry e;
  //e.name = "hello";
  strcpy(e.name, "hello");
  //e.t = num;
  //e.v.i = 99;
  e.t = ptr;
  e.v.p = new Node;
  e.v.p->a = 8.8;

  printf("string size: %lu\n", sizeof(e.name));
  printf("entry's type size: %lu\n", sizeof(e.t));
  printf("entry'union size: %lu\n", sizeof(e.v));
  printf("entry size: %lu\n", sizeof(e));
  f(&e);

  printf("---------------------------\n");
  cc::Entry ce;
  strcpy(ce.name, "hello");
  ce.v = 99;
  printf("entry size: %lu\n", sizeof(ce));
  cc::f(&ce);

  return 0;
}
