#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Initialization
    // vector<int> arr = {0,1,2,3,4};

    //Fill Constructor
    vector<int> arr(10,0);

    //pop element from back
    arr.pop_back();

    //add element in the vector at the back
    arr.push_back(1);
    arr.push_back(2);

    for(int i=0; i< arr.size();i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;



    cout << "Size of the vector is " << arr.size() << endl;

    cout << "Capacity of the vector is " << arr.capacity() << endl;

    return 0;
}