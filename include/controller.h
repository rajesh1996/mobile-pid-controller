/* @file controller.h
 * @brief A bare-bones PID Controller implementation.
 * 
 * @copyright [2020] <Daniel M. Sahu> <Spencer Elyard> 
 */

#ifndef INCLUDE_CONTROLLER_H_
#define INCLUDE_CONTROLLER_H_

/* @brief This class is used to calculate a target velocity via PID control.
 * 
 * This class implements a discrete Proportional Integral Derivative (PID)
 * controller. No timing is handled internally; calls to 'compute' are
 * expected to come in fixed time steps.
 */
class PIDController {
 public:
    PIDController() :
      kp_(0.0),
      ki_(0.0),
      kd_(0.0),
      dt_(0.1),
      previous_error_(0.0),
      integral_(0.0)
    {}
    ~PIDController() {}

    /* @brief Calculate command given setpoint and error.
     * 
     * @param setpoint the desired velocity.
     * @param velocity the current actual velocity.
     */
    double compute(double setpoint, double velocity);

    /* @brief Reset the current state back to zero.
     */
    void reset();

    // @brief Set PID parameters (K,I,D)
    void setK(double kp, double ki, double kd);

    // @brief Set the expected timestep
    void setT(double dt);

    // @brief Get the currently set PID parameters (K,I,D);
    void getK(double& kp, double& ki, double& kd);

    // @brief Get the timestep we're using.
    void getT(double& dt);

 private:
    // @brief Proportional control weight.
    double kp_;

    // @brief Integral control weight.
    double ki_;

    // @brief Derivative control weight.
    double kd_;

    // @brief Timestep
    double dt_;

    // @brief State variable for previously calculated error.
    double previous_error_;

    // @brief State variable for cumulaitve integrated error.
    double integral_;
};

#endif // INCLUDE_CONTROLLER_H_
