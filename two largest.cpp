#include <iostream>
#include <vector>

using namespace std;

vector<double> twoLargest(vector<double> a)
{
	vector<double> result;
	int n = a.size();
	int large_1 = 0;
	int large_2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > large_1)
		{
			large_2 = large_1;
			large_1 = a[i];
		}
		else if (large_2 < a[i])
			large_2 = a[i];
	}//end for
	result.push_back(large_1);
	result.push_back(large_2);
	return result;
}

vector<double> vector_get(int n)
{
	int i;
	double d;
	vector<double> v;

	for (i = 0; i < n; ++i)
	{
		cout << "Enter value " << i + 1 << ": ";
		cin >> d;
		v.push_back(d);
	}

	return v;
}

void vector_print(vector<double> v)
{
	size_t i;
	for (i = 0; i < v.size() - 1; ++i)
	{
		cout << v[i] << ", ";
	}
	cout << v[i] << endl;
}

int main()
{
	int n;
	vector<double> a;
	
	cout << "How many numbers do you want to enter?\n";
	cin >> n;
	a = vector_get(n);

	cout << "The two largest numbers are: ";
	vector_print(twoLargest(a));
	
	return 0;
}