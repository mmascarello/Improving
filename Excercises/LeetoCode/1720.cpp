/*Given an integer number n, return the difference between the product of its digits and the sum of its digits.*/

int subtractProductAndSum(int n) {
    int result = 0;
    int sum = 0;
    int prod = 1;
    while (n != 0) {
        int last = n % 10;
        sum += last;
        prod *= last;
        n = (n - last) / 10;
    }
    
    result= prod - sum;
    return result;
}

