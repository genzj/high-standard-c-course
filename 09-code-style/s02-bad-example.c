int fib(int N)
{
    if (N < 2)
    {
        return 1;
    }
    int p_1 = 1;
    int p = 1;
    int ans = 2;
    for (int n = 2; n < N; ++n)
    {
        p_1 = p;
        p = ans;
        ans = p + p_1;
    }
    return ans;
}
