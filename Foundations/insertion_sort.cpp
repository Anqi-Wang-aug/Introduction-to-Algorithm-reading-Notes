#include <iostream>
#include <string>

using namespace std;

void print_array(int a[], int l)
{
	for (int i = 0; i<l; ++i)
		cout << a[i] << " ";
	cout << "\n";
}


int main(int argc, char** argv)
{
	int num_number = argc-1;
	
	// check if numbers are inputted
	if(num_number==0)
		cout << "no input :-(" << "\n";
	else
	{
		// putting input numbers into an array
		int number[num_number];
		for (int i = 0; i<num_number; ++i)
		{
			number[i] = stoi(argv[i+1]);

		}

		// displaying the array
		print_array(number, num_number);
				
		cout << "insertion sort start" << "\n";

		// insertion sort algorithm. Showing with comparisons
		for(int j = 1; j<num_number; ++j)
		{
			cout <<"Round: "<< j << " ";
			int key = number[j];
			cout << "Number at "<< j << ": " << key << endl;
			int i = j-1;
			while (i>=0 && number[i]>key)
			{
				cout << "Compared with: " << number[i] << " at index " << i << endl;
				number[i+1] = number[i];
				i = i-1;
			}
			number[i+1] = key;
			
			// displaying the array at every insertion
			print_array(number, num_number);
			cout << "----------------------------------------------" << endl;
		}
		print_array(number, num_number);	
	}
}
