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

Car get_car(Car car1);
enum CarType get_type(Car car1);
enum Color get_color(Car car1);
double get_fill_level(Car car1);
double get_acceleration_rate(Car car1);
double get_speed(Car car1);
void init();


#endif
