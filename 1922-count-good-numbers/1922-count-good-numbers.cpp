/*
At even indices there can be 5 values(0,2,4,6,8) i.e. all even numbers 0 to 9
And At odd indices there can 4 values(2,3,5,7) i.e. all prime numbers 0 to 9
So we notice that there are 5 values which can be in even indices and 4 in odd indices.
So now Logic is simple :-
Total number of good digit strings would be  (5 ^ even indices) * (4 ^ odd indices)....We also need to return  % 10^9 + 7.
But the other problem is the constraints which is way too big. So we need to calculate (5 ^ even indices) and  (4 ^ odd indices) in log(n) time, which is done by powerMod function.
Now lets understand the powerMod fuction :-

We know that a^b where b is 0 is 1. So thats our base case.
Now if b is not 0 :-
Case 1 - b is even
a^b can written as (a^(b/2)) * (a ^ (b/2)) right?! So we just do an recursive call here

Case 2 - b is odd
here i would like to take b as 5 for explanation.
a^5 can be written as a^(5/2) * a^(5/2) * a. Which can be re-written as (a^(b/2)) * (a^(b/2)) * a.
So again we just do an recursive call again!


Note 5/2 is 2.

*/



class Solution {
public:
     long long powerMod(int a, long long b, int mod)
     {
        if(b == 0)
            return 1;
        long long x = powerMod(a, b/2, mod);
        if(b % 2 == 0)
            return (x * x) % mod;
        else
            return (((a * x) % mod) * x) % mod;
    }
    
    int countGoodNumbers(long long n) 
    {
        
       int mod = 1e9+7;
        return (powerMod(5, (n + 1) / 2, mod) * powerMod(4, n / 2, mod)) % mod;
    }
    
};