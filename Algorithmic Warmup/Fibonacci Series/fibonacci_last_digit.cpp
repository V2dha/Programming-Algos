#include <iostream>

int get_fibonacci_last_digit(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 2; i <=n; i++) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    return current;
}

int fibonacci_fast(int n) {
    int fib[n];
    fib[0]=0, fib[1]=1;
    for(int i=2; i<=n; i++){
    	fib[i] = (fib[i-1]+fib[i-2])%10;
    }

    return fib[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
    }
