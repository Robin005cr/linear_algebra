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