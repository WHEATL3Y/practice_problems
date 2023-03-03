#!/usr/bin/python3
import time

def fast_fib(n: int, memo: dict) -> None:
    if n <= 1:
        return 1
    else:
        if n in memo.keys():
            return memo[n]
        else:
            memo[n] = fast_fib(n-1, memo) + fast_fib(n-2, memo)
            return memo[n]
        
def slow_fib(n):
    if n <= 1:
        return 1
    else:
        return slow_fib(n-1) + slow_fib(n-2)

if __name__ == '__main__':
    CALCULATE_TO = 40
    memo = {}

    start = time.time()
    fast_result = fast_fib(CALCULATE_TO, memo)
    stop = time.time()
    print(f'Fast Fib to {CALCULATE_TO} = {fast_result} in {round(stop-start, 3)} seconds')

    start = time.time()
    slow_result = slow_fib(CALCULATE_TO)
    stop = time.time()
    print(f'Slow Fib to {CALCULATE_TO} = {slow_result} in {round(stop-start, 3)} seconds')