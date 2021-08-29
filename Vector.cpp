#include <iostream>
#include <vector>


int main()
{
	std::vector<int> v;
	std::cout << "Capacity-> " << v.capacity() << std::endl;
	std::cout << "Size-> " << v.size() << std::endl;

	v.push_back(1);
	std::cout << "Capacity-> " << v.capacity() << std::endl;
	std::cout << "Size -> " << v.size() << std::endl;

	v.push_back(2);
	std::cout << "Capacity-> " << v.capacity() << std::endl;
	std::cout << "Size-> " << v.size() << std::endl;
	

	v.push_back(3);
	std::cout << "Capacity-> " << v.capacity() << std::endl;
	std::cout << "Size-> " << v.size() << std:: endl;

	// print a particular element at a specific index position
	std::cout << "Element at index 2 is : " << v.at(2) << std::endl;

	// Print the front and back element of the vector
	std::cout << "Front element " << v.front() << std::endl;
	std:: cout << "Back element " << v.back() << std::endl;

	// Print all the elements of the vector
	for (int i:v){
		std::cout << i << " ";
	}
	std::cout << std::endl;

	v.pop_back();

	// print all the elements after pop operation
	
	for(int i: v){
		std::cout << i << " ";
	}
	std::cout << std::endl;

	// Befor clear the size of the vector is
	std::cout << "Size befor clear-> " << v.size() << std::endl;
	
	v.clear();
	// After clear the size of the vector is
	std::cout << "Size of the vector after clear: " << v.size() << std::endl;
	// After clear the capacity of the vector is 
	std::cout << "Capacity of the vector is : " << v.capacity() << std::endl;

	// Note: the v.clear() only erase the elements of the vector but not 
	// release the total alocated memory
	

	return 0;
}

