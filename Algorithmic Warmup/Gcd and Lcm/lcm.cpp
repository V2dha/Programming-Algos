#include <iostream>

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long euclidgcd(long long a, long long b){
  if(b==0)
    return a;
  long long a_rem = a % b;
  return euclidgcd(b, a_rem);
}


long long lcm_fast(long long  a, long long b) {
	long long gcd=euclidgcd(a, b);
	return (a/gcd*b);
}

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
return 0;
}
