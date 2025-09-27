int solution(int number) {
    if (number <= 0) return 0;
​
    number--; // altındaki sayılar
​
    long long n3  = number / 3;
    long long n5  = number / 5;
    long long n15 = number / 15;
​
    long long sum3  = 3LL * n3 * (n3 + 1) / 2;
    long long sum5  = 5LL * n5 * (n5 + 1) / 2;
    long long sum15 = 15LL * n15 * (n15 + 1) / 2;
​
    long long total = sum3 + sum5 - sum15;
​
    return (int)total; // Criterion testleri için int döndür
}
​