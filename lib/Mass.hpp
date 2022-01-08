#ifndef MASS_H
#define MASS_H

class Kilo {
private:
    double value;

public:
    Kilo(double value) {
        this->value = value;
    }

    double toPound() {
        return this->value * 2.2046;
    }

    double toStone() {
        return this->value / 6.3502;
    }
};

class Pound {
private:
    double value;

public:
    Pound(double value) {
        this->value = value;
    }

    double toKilo() {
        return this->value / 2.2046;
    }

    double toStone() {
        return this->value / 14.0;
    }
};

class Stone {
private:
    double value;

public:
    Stone(double value) {
        this->value = value;
    }

    double toKilo() {
        return this->value * 6.3502;
    }

    double toPound() {
        return this->value * 14.0;
    }
};

#endif