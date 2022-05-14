# insertion sort recursively
def print_array(a):
	for item in a:
		print(item, end = ' ')
	print('\n')

def sort_rec(a,n):
	l = len(a)
	if n==l: return
	
	first = a[l-n]
	j = l-n-1
	while(j<l and a[j]>a[j+1]):
		tmp = a[j+1]
		a[j+1] = a[j]
		a[j] = tmp
		j+=1

		if (j==l-1):
			first = a[j]
			j -=1
		else: first = a[j+1]
			
	
	a[j+1] = first
	print_array(a)
	sort_rec(a,n+1)

arr0 = [10, 2, 3, 14]
print_array(arr0)
sort_rec(arr0, 1)

arr1 = [12, 11, 13, 5, 6]
print_array(arr1)
sort_rec(arr1, 1)

arr2  = [11, 9, 7, 5, 3, 1]
print_array(arr2)
sort_rec(arr2,1)
