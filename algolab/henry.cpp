#include <stdio.h> //약분 약분 약분

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
  int numTestCases;
  int numer, denom, x, gcdNum;

  scanf("%d", &numTestCases);

  while(numTestCases--)
  {
    scanf("%d %d", &numer, &denom);
    while(1)
    {
      gcdNum=gcd(denom,numer);
      denom /= gcdNum;
      numer /= gcdNum;
      if((denom % numer))
      {
        x = (denom / numer) + 1;
        numer = x * numer - denom;
        denom = denom * x;

        gcdNum=gcd(denom,numer);
        denom /= gcdNum;
        numer /= gcdNum;
      }
      else
      {
        printf("%d\n", denom);
        break;
      }
    }
  }
}
