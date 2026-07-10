/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : vectorXdOperations.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <Eigen/Dense>
#include <iostream>
#include <algorithm>  // for std::sort
#include <cmath>

int main()
{
    using namespace Eigen;
    using namespace std;

    // --------------------------------------------------
    // 1. Create and initialize a VectorXd
    // --------------------------------------------------
    VectorXd v(5);
    v << 1, 2, 3, 4, 5;

    cout << "Original vector v:\n" << v.transpose() << "\n\n";

    // --------------------------------------------------
    // 2. Access and modify elements
    // --------------------------------------------------
    cout << "First element: " << v(0) << endl;
    v(2) = 10;  // modify 3rd element
    cout << "After modifying v(2):\n" << v.transpose() << "\n\n";

    // --------------------------------------------------
    // 3. Vector arithmetic
    // --------------------------------------------------
    VectorXd u(5);
    u << 5, 4, 3, 2, 1;

    VectorXd sum  = v + u;
    VectorXd diff = v - u;
    VectorXd scaled = 2.0 * v;

    cout << "Sum (v + u):\n" << sum.transpose() << endl;
    cout << "Difference (v - u):\n" << diff.transpose() << endl;
    cout << "Scaled (2 * v):\n" << scaled.transpose() << "\n\n";

    // --------------------------------------------------
    // 4. Dot product and norms
    // --------------------------------------------------
    double dot_product = v.dot(u);
    double l2_norm = v.norm();            // L2 norm
    double squared_norm = v.squaredNorm();

    cout << "Dot product (v · u): " << dot_product << endl;
    cout << "L2 norm of v: " << l2_norm << endl;
    cout << "Squared norm of v: " << squared_norm << "\n\n";

    // --------------------------------------------------
    // 5. Statistical operations
    // --------------------------------------------------
    double mean = v.mean();
    double sum_val = v.sum();
    double min_val = v.minCoeff();
    double max_val = v.maxCoeff();

    cout << "Mean of v: " << mean << endl;
    cout << "Sum of v: " << sum_val << endl;
    cout << "Min value: " << min_val << endl;
    cout << "Max value: " << max_val << "\n\n";

    // --------------------------------------------------
    // 6. Element-wise operations (using .array())
    // --------------------------------------------------
    VectorXd squared = v.array().square();
    VectorXd sqrted  = v.array().sqrt();

    cout << "Element-wise square:\n" << squared.transpose() << endl;
    cout << "Element-wise sqrt:\n" << sqrted.transpose() << "\n\n";

    // --------------------------------------------------
    // 7. Normalization
    // --------------------------------------------------
    VectorXd normalized_v = v.normalized(); // does not modify v
    cout << "Normalized vector:\n" << normalized_v.transpose() << endl;
    cout << "Norm after normalization: "
         << normalized_v.norm() << "\n\n";

    // --------------------------------------------------
    // 8. Head, Tail, and Segment
    // --------------------------------------------------
    cout << "First 3 elements (head): "
         << v.head(3).transpose() << endl;

    cout << "Last 2 elements (tail): "
         << v.tail(2).transpose() << endl;

    cout << "Middle 3 elements (segment): "
         << v.segment(1, 3).transpose() << "\n\n";

    // --------------------------------------------------
    // 9. Resize and append element
    // --------------------------------------------------
    v.conservativeResize(v.size() + 1);
    v(v.size() - 1) = 42;

    cout << "After appending 42:\n" << v.transpose() << "\n\n";

    // --------------------------------------------------
    // 10. Sorting (Eigen has no built-in sort)
    // --------------------------------------------------
    VectorXd sorted = v;
    std::sort(sorted.data(), sorted.data() + sorted.size());

    cout << "Sorted vector:\n" << sorted.transpose() << "\n\n";

    // --------------------------------------------------
    // 11. Validity checks
    // --------------------------------------------------
    cout << "Contains NaN? " << (v.hasNaN() ? "Yes" : "No") << endl;
    cout << "All finite? " << (v.allFinite() ? "Yes" : "No") << endl;

    return 0;
}
