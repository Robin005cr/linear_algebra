/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : eigenDemo.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/

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

    Tensor<float, 2> Tensor2(2, 3);
    Tensor2.setRandom();

    cout << "Tensor2 :" << Tensor2 << endl;

	int size = Tensor2.size();
	int rows = Tensor2.dimension(0);
	int cols = Tensor2.dimension(1);
	cout << "Size: " << size << ", Rows: " << rows << ", Cols: " << cols << endl;
    return 0;
}