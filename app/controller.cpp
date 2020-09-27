/* @file controller.cpp
 * 
 * @copyright [2020] <Daniel M. Sahu> <Spencer Elyard> 
 */

/**
 * @fn double compute(double, double)
 * @brief
 *
 * @param setpoint
 * @param velocity
 * @return
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
  integral_ = 0.0;
  previous_error_ = 0.0;

}

// stub implementation
void PIDController::setK(double kp, double ki, double kd) {
  kp_ = kp;
  ki_ = ki;
  kd_ = kd;

}

// stub implementation
void PIDController::setT(double dt) {
  dt_ = dt;
}

// stub implementation
double& PIDController::getKp() {
  return kp_;
}
// stub implementation
double& PIDController::getKi() {
  return ki_;
}
// stub implementation
double& PIDController::getKd() {
  return kd_;
}

// stub implementation
double& PIDController::getDt() {
  return dt_;
}
