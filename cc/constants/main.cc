#include <cstdio>
#include <cmath>
#include <vector>

double sum(const std::vector<double>& vec) {
  double sum = 0.0;
  for(const auto& v : vec) {
    sum += v;
  }
  return sum;
}

constexpr double squre(doube x) {
  return x*x;
}

int main(void) {
  constexpr int dmv = 17;
  int var = 17;
  const double sqv = sqrt(var);
  std::vector<double> v = {1.2, 3.4, 4.5};
  const double s1 = sum(v);
  constexpr double s2 = sum(v);

  constexpr double max1 = 1.4 * square(17);
  constexpr double max2 = 1.4 * square(var);
  const double max3 = 1.4 * square(var);

  return 0;
}
