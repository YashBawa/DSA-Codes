// for finding prime number --> Best way
// SIEVE of ERATOSTHENES
// time complexity reduced --> nlog(logn)
// mainly this algo is used when a bunch of values are to be used 

int is_prime[1000001];
void seive () 
{
    int maxn = 1000000;
    for (int i=2;i<=maxn;i++)
    {
        is_prime[0]=is_prime[1]=0;
        if (is_prime[i]==1)
        {
            for(int j=i*i;j<maxn;j+=i)
            is_prime[j]=0;
        }
    }
}