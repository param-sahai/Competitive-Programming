#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}

list<long long> palin1()
{
    vector<bool> is_prime;
    list<long long> List_of_Primes;
    is_prime.assign(112345, true);
    for (int i = 2; i < 112345; i++)
    {
        if (is_prime[i])
        {
            bool remove_some = false;
            for (int j = i + i; j < 112345; j += i)
            {
                if (is_prime[j])
                {
                    is_prime[j] = false;
                    remove_some = true;
                }
            }
            if (!remove_some)
                break;
        }
    }
    for (int i = 2; i < 112345; i++)
        if (is_prime[i])
            List_of_Primes.push_back(i);
    return List_of_Primes;
}

int main()
{
    int T;
    cin >> T;
    list<long long> List_of_Primes = palin1();
    // cout << List_of_Primes.size() << ' ' << List_of_Primes.back() << '\n';
    for (int i = 1; i <= T; i++)
    {
        cout << "Case #" << i << ": ";
        long long A;
        cin >> A;
        list<pair<long long, int>> prime_factorization;
        int total_palindromes = 0;
        for (auto p : List_of_Primes)
        {
            if (p > A)
                break;
            int total_p = 0;
            while (A % p == 0)
            {
                A /= p;
                total_p++;
            }
            if (total_p)
                prime_factorization.push_back({p, total_p});
        }
        if (A > 1)
            prime_factorization.push_back({A, 1});
        set<long long> factors;
        factors.insert(1);
        for (auto element : prime_factorization)
        {
            long long p = element.first;
            long long total_p = element.second;

            list<long long> new_factors;
            for (auto f : factors)
                for (long long i = 1, pow_p = p; i <= total_p; pow_p *= p, i++)
                    new_factors.push_back(f * pow_p);
            factors.insert(new_factors.begin(), new_factors.end());
        }
        for (auto f : factors)
            if (is_palindrome(to_string(f)))
                total_palindromes++;
        cout << total_palindromes << '\n';
    }
    return 0;
}