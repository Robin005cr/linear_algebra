/*
* project   : https://github.com/Robin005cr/linear_algebra
* file name : basic.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include<iostream>
#include<Eigen/Dense>
#include<cmath>
int main()
{
    double roll_deg;
    double pitch_deg;
    double yaw_deg;

    constexpr double to_radian = M_PI /180.0;

    const Eigen::AngleAxisd r(roll_deg*to_radian, Eigen::Vector3d::UnitX());
    const Eigen::AngleAxisd p(pitch_deg*to_radian, Eigen::Vector3d::UnitY());
    const Eigen::AngleAxisd y(yaw_deg*to_radian, Eigen::Vector3d::UnitZ());

}