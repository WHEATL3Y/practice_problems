#!/usr/bin/python3

def main():
    
    calculateTo = 1000000
    primesCount = 1
    primes = [2]
    primeFlag = False

    print(f"Calculating Primes up to {calculateTo}")

    for i in range(3, calculateTo + 1):

        primeFlag = True

        for p in primes:
            if p * p > i:
                break;
            elif i % p == 0:
                primeFlag = 0
                break;
            else:
                continue

        if primeFlag:
            primesCount += 1
            primes.append(i)


    print(primesCount)


if __name__ == "__main__":
    main()
