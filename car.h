/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H



enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK };
enum CarType {AIXAM,FIAT_MULTIPLA, JEEP };

typedef struct CarImplementation* Car;


Car get_car(CarType car);
enum CarType get_type(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
double get_acceleration_rate(Car car);
int get_speed(Car car);
void init();
void accelerate(Car car);
double set_acceleration_rate(Car car, double acceleration);


#endif
