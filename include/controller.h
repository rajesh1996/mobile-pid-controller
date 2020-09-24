/* @file controller.h
 *
 */

class PIDController
{
  public:
    PIDController();
    ~PIDController();

    /* @brief Calculate command given setpoint and error.
     */
    double compute(double setpoint, double velocity);

  private:
    // control parameters
    double kp_, ki_, kd_;

};

