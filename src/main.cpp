#include <rxcpp/rx.hpp>

namespace Rx {
  using namespace rxcpp;
  using namespace rxcpp::sources;
  using namespace rxcpp::operators;
  using namespace rxcpp::util;
}
using namespace Rx;

using namespace std;

int main() {

  // Convert int to strings
  auto stream$ = range(0, 10) |
                 Rx::map([](const int i) {
                   return to_string(i);
                 }) |
                 tap([](string s) {
                   cout << "tapstream: " << s << endl;
                 });

  // print result
  stream$ |
    subscribe<string>(println(cout));

  return 0;
}