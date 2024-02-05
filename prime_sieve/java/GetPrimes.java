import java.util.*;

public class GetPrimes {

    public static void main(String[] args) {

        int calculateTo = 1000000;
        int primesCount = 1;        // 2 is given, account for that here
        List<Integer> primes = new ArrayList<Integer>();
        int primeFlag = 0;

        System.out.println(args.length);
        
        // if (args[0].length > 0) {
        //     calculateTo = (int) args[0];
        // }
        // else {
        //     calculateTo = 10000; 
        // }

        System.out.printf("Calulating Primes up to %d\n", calculateTo);

        primes.add(2);
        for (int i = 3; i < calculateTo; i++) {
                primeFlag = 1;
            for (int j = 0; j < primes.size() - 1; j++) {
                int p = (int) primes.get(j);
                // if ((p * p) > i) {
                if (p > Math.sqrt(i)) {
                    break;
                }
                else if (i % p == 0) {
                    primeFlag = 0;
                    break;
                }
                else {
                    continue;
                }
            }
            if (primeFlag == 1) {
                primesCount++;
                primes.add(i);
            }
        }

        System.out.println(primesCount);
        
    }
}
