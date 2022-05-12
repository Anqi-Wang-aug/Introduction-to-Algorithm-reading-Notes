#include <iostream>

using namespace std;

void print_array(int a[], int n)
{
	for(int i = 0; i<n; i++)
		cout << a[i];
	cout << endl;
}

/* idea from full logical adder
 * see this image: https://circuits-diy.com/wp-content/uploads/2021/08/full-adder-circuit.png
 */
void bin_add(int a[], int b[], int l)
{
	int c[l+1];
	int c_l = l+1;
	int last_index = l-1;
	int o = 0;

	for(int i = last_index; i>=0; --i)
	{
		int xor_a_b = (a[i]^b[i]);
		int and_a_b = (a[i]&b[i]);
		c[i+1] = (o^xor_a_b);
		int and_o_xor = (o&xor_a_b);
		o = (and_o_xor|and_a_b);
	}
	c[0] = o;

	print_array(c, c_l);
}

int main()
{
	//for simplicity we set the number to be four digits
	int n = 4;
	int a1[] = {1, 0, 1, 1};
	int a2[] = {0, 1, 1, 1};
	
	print_array(a1, n);
	print_array(a2, n);
	bin_add(a1, a2, n);
	
	return 0;
}
