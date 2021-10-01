#include <string>
#include <sstream>
#include <iostream>
#include "classes.h"

car::car(const std::string mark, const int cylinders, const double power)
	: mark(mark), cylinders(cylinders), power(power) {}

std::string car::get_mark() const {
	return this->mark;
}

int car::get_cylinders() const {
	return this->cylinders;
}

double car::get_power() const {
	return this->power;
}

void car::set_mark(const std::string mark) {
	this->mark = mark;
}

void car::set_cylinders(const int cylinders) {
	if (cylinders <= 0) {
		throw;
	}
	this->cylinders = cylinders;
}

void car::set_power(const double power) {
	if (power <= 0) {
		throw;
	}
	this->power = power;
}

lorry::lorry(const std::string mark, const int cylinders, const double power, const double load_capacity)
	: car(mark, cylinders, power), load_capacity(load_capacity) {}

void lorry::set_load_capacity(const double load_capacity) {
	this->load_capacity = load_capacity;
}

double lorry::get_load_capacity() const{
	return this->load_capacity;
}

std::string lorry::to_string() const
{
	std::stringstream buffer;
	buffer << "{" << this->mark << ", ";
	buffer << this->cylinders << ", ";
	buffer << this->power << ", ";
	buffer << this->load_capacity << "}";

	return buffer.str();
}

std::ostream& operator << (std::ostream& out, const lorry& lorry)
{
	return out << lorry.to_string();
}