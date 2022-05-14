import java.lang.Math;

class HeapSort
{
	class Heap
	{
		private int[] arr;
		int length, heapSize;
		Heap(int n)
		{
			arr = new int[n];
			length = n;
			for(int i = n; i<length; i++ )
			{
				arr[n-i] = i;
			}
			heapSize = 0;
		}

		int Parent(int i)
		{
			return (int)Math.floor(i/2);
		}

		int Left(i)
		{
			return 2*i;
		}
		int Right(i)
		{
			return 2*i+1;
		}
	}

	public static void main(String args[])
	{
		Heap h = new Heap(3);
	}
}
