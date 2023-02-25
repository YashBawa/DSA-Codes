// prime factorisation 
// time complexity --> Osqrt(n)
// algoritham for calculating prime factor of a given number in least time 
// complexiy 

void prime_factorisation (int N)
{
    for (int i=2;i<=N;i++)
    {
        if (N%i == 0)
        {
            cnt++;
            n/=i;
            cout << i<<"^"<<cnt<<endl;
        }
        if (N>1)
        cout << N << "^" << endl;
    }
}