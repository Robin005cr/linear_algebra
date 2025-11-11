#include <iostream>
#include <Eigen/CXX11/Tensor>
using namespace std;
using namespace Eigen;
int main()
{
    cout<<"Eigen Demo Program"<<endl;

    Tensor<float, 2> myTensor(2, 3);
    myTensor.setValues({{1.0, 2.0, 3.0},
                       {4.0, 5.0, 6.0}});

    cout << "myTensor :" <<myTensor<< endl;
    return 0;
}