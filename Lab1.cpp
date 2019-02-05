#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<char> Chars;
	vector<int> nums;	


	
	//Example: Strings	
	string s1 = "Hello";
	string s2 = s1 + " world"; //Concatention
	cout << s2 << endl;
	cout<< "s1 = " << s1 << endl;
	cout<< "The 3rd character of s1 is " << s1[2] <<endl;
	cout<<"s1 has " << s1.size() << " charcaters" <<endl;	



	//Example: for loop, vector::push_back
	for(unsigned int i = 0; i < 10; i++)
	nums.push_back(i);



	//Print nums in reverse order
	//Example: auto, while loop, vector::pop_back, vector::empty
	auto index = nums.size() - 1;
	while(!nums.empty())
	{
		cout<<nums[index]<<endl;
		nums.pop_back(); 	//remove last num immediately after print (cout)
		index--;
	}



	//Adds a, b, c to the vector "Chars"
	Chars.push_back('a');
	Chars.push_back('b');
	Chars.push_back('c');

	

	//Example: auto + for loop (Advanced for loop method [no 'for' statement needed])
	for(auto j: Chars)
		cout<<j<<" ";
	cout<<endl;		

	
	return 0;
}
