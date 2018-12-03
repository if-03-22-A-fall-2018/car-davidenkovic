#include "car.h"
#define CARCOUNT 6

struct CarImplementation{
  enum CarType carType;
  enum Color color;
  double fillLevel;
  double accelerationRate;
  int speed;
  bool isrented;
};

static struct CarImplementation aixam = {AIXAM,RED,16.0,0.0,0,false};
static struct CarImplementation fiat = {FIAT_MULTIPLA,GREEN,65.0,0.0,0,false};
static struct CarImplementation fiat2 = {FIAT_MULTIPLA,BLUE,65.0,0.0,0,false};
static struct CarImplementation fiat3 = {FIAT_MULTIPLA,ORANGE,65.0,0.0,0,false};
static struct CarImplementation jeep = {JEEP,SILVER,80.0,0.0,0,false};
static struct CarImplementation jeep2 = {JEEP,BLACK,80.0,0.0,0,false};


Car carpark[CARCOUNT] = {&aixam,&fiat,&fiat2,&fiat3,&jeep,&jeep2};


Car get_car(CarType car){
  for (int i = 0; i < CARCOUNT; i++) {
    if (car == carpark[i]->carType && carpark[i]->isrented == false) {
      carpark[i]->isrented = true;
      return carpark[i];
    }
  }
  return 0;
}
enum CarType get_type(Car car){
  return car->carType;
}
enum Color get_color(Car car){
  return car->color;
}
double get_fill_level(Car car){
  return car->fillLevel;
}
double get_acceleration_rate(Car car){
 return car->accelerationRate;
}
int get_speed(Car car){
  return car->speed;
}
void init(){
  for (int i = 0; i < CARCOUNT; i++) {
    carpark[i]->isrented = false;
    carpark[i]->accelerationRate = 0;
  }
}
void accelerate(Car car){

}
double set_acceleration_rate(Car car, double acceleration){
   car->accelerationRate = acceleration;
   return car->accelerationRate;
}
