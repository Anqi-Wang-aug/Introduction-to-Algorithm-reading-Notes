#Heapsort
## Heap (or binary heap)
> an array object that we can view as a nearly complete binary tree.
Node = an element in the array
### Attributes
1. length: number of elements in the array
2. heap-size: number of elements in the heap are stored within the array
	1. 0 <= heap-size <= length
### Heap Property
	* Max (max-heap-property) and min (min-heap-property) heap
		1. Max heap property: for every node in heap, its parent is greater than (or equal to) itself
		2. Min heap property: for every node in heap, its parent is smaller (or equal to) itself
	* We use max-heap for heapsort
	* min heap is for priority queue
### height
> number of edges on the longest simple downward path from the node to a leaf.

