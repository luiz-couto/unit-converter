#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Celsius {
private:
    double value;

public:
    Celsius(double value) {
        this->value = value;
    }

    double toFarenheit() {
        return (this->value * 1.8) + 32;
    }

    double toKelvin() {
        return this->value + 273,15;
    }
};

class Fahrenheit {
private:
    double value;

public:
    Fahrenheit(double value) {
        this->value = value;
    }

    double toCelsius() {
        return (this->value - 32) * (5/9);
    }

    double toKelvin() {
        return (this->value - 32) * (5/9) + 273,15;
    }
};

class Kelvin {
private:
    double value;

public:
    Kelvin(double value) {
        this->value = value;
    }

    double toFarenheit() {
        return (this->value - 273,15) * (9/5) + 32;
    }

    double toCelsius() {
        return this->value - 273,15;
    }
};

#endif
