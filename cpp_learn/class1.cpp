#include <iostream>

class Motor{
public:
    void setspeed(double speed){
        if(speed < -0.1){
            speed = -0.1;
        }
        if(speed > 0.1){
            speed = 0.1;
        }
        speed_ = speed;
    }
    double speed() const{
        return speed_;
    }

private:
    double speed_ = 0.0;

};