#include <cmath>
namespace heap
{
	class heapsort
	{
		heapsort(int n)
		{
			int a[n];
			for (i = n; i>=1; --i)
			{
				a[n-i] = i;
			}
		}

		int Parent(i)
		{
			return floor(i/2);
		}

		int Left(i)
		{
			return 2*i
		}
		int Rgith(i)
		{
			return 2*i+1
		}
	}
}
