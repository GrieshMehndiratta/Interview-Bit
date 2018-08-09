int cpFact(int A, int B) {
    while(gcd(A,B)!=1)
    {
        A=A/gcd(A,B);
    }
    return A;
}
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            return gcd(a - b, b);
        else
            return gcd(a, b - a);
    }
    return a;
}