#include <iostream>
using namespace std;

int power(int x, unsigned int y1)
{
    if (y1 == 0)
        return 1;
    else if (y1 % 2 == 0)
        return power(x, y1 / 2) * power(x, y1 / 2);
    else
        return x * power(x, y1 / 2) * power(x, y1 / 2);
}

int main(){
	int x,y;
	
	cin>>x>>y;
	
	//compute x^y
	
	int answer=power(x,y);

	cout<<answer<<endl;

	return 0;
}

/*
Input:
	3 5
Output:
	243
*/