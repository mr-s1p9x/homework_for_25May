#include <iostream>
using namespace std;

// Определение класса Fraction
class Fraction {
private:
	int numerator; // Числитель
	int denominator; // Знаменатель

public:
	// конструктор класса
	Fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	// Метод ввода данных
	void read() {
		cout << "Enter numerator: ";
		cin >> numerator;
		cout << "Enter denominator: ";
		cin >> denominator;
	}

	// Метод для ввода данных
	void display() const {
		cout << numerator << "/" << denominator << endl;
	}

    // Метод для сложения дробей
    Fraction add(const Fraction& other) const {
        int newNumerator = this->numerator * other.denominator + this->denominator * other.numerator;
        int newDenominator = this->denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Метод для вычитания дробей
    Fraction subtract(const Fraction& other) const {
        int newNumerator = this->numerator * other.denominator - this->denominator * other.numerator;
        int newDenominator = this->denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Метод для умножения дробей
    Fraction multiply(const Fraction& other) const {
        int newNumerator = this->numerator * other.numerator;
        int newDenominator = this->denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // Метод для деления дробей
    Fraction divide(const Fraction& other) const {
        int newNumerator = this->numerator * other.denominator;
        int newDenominator = this->denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }
};

// Пример использования класса Fraction
int main() {
    Fraction frac1(1, 2); // Инициализация дроби 1/2
    Fraction frac2(3, 4); // Инициализация дроби 3/4

    std::cout << "Fraction 1: ";
    frac1.display();

    std::cout << "Fraction 2: ";
    frac2.display();

    Fraction result = frac1.add(frac2);
    std::cout << "Addition result: ";
    result.display();

    result = frac1.subtract(frac2);
    std::cout << "Subtraction result: ";
    result.display();

    result = frac1.multiply(frac2);
    std::cout << "Multiplication result: ";
    result.display();

    result = frac1.divide(frac2);
    std::cout << "Division result: ";
    result.display();

    return 0;
}