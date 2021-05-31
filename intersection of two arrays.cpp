#include <bits/stdc++.h>
#include<set>
using namespace std;
void getIntersection(int a[], int n, int b[], int m)
{
	
	set<int> s;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				s.insert(a[i]);
			}
		}
	}
	
	for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr
             << " "; 
}

int main()
{
	int a[9] = { 1, 2, 5, 6, 2, 3, 5, 7, 3 };
	int b[10] = { 2, 4, 5, 6, 8, 9, 4, 6, 5, 4 };

	getIntersection(a, 9, b, 10);
}


