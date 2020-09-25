/* @file controller.cpp
 * 
 * @copyright [2020] <Daniel M. Sahu> <Spencer Elyard> 
 */

#include <controller.h>

// stub implementation
double PIDController::compute(double setpoint, double velocity) {
  double err = setpoint - velocity;
  double prop_term = kp_ * err;

  integral_ += err * dt_;

  double integ_term = ki_ * integral_;

  double derivative = (err - previous_error_) / dt_;
  double deriv_term = kd_ * derivative;

  double out = prop_term + integ_term + deriv_term;

  previous_error_ = err;

  return out;

}

// stub implementation
void PIDController::reset() {
}

// stub implementation
void PIDController::setK(double kp, double ki, double kd) {
}

// stub implementation
void PIDController::setT(double dt) {
}

// stub implementation
void PIDController::getK(double &kp, double &ki, double &kd) {
}

// stub implementation
void PIDController::getT(double &dt) {
}
