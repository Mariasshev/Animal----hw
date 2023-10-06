#pragma once
#include <iostream>
using namespace std;

struct IFly {					//интерфейс для летающих
	virtual void Fly() = 0;
};

struct IAnimal {				//интерфейс для всех животных
	virtual void Sound() = 0;
	virtual void Eat() = 0;
	virtual void Continent()const = 0;
};

struct ISwim {					//интерфейс для плавающих
	virtual void Swim() = 0;
};

class Animal : public IAnimal
{
protected:
	string name;
	int weight;
	string continent;
public:
	Animal() = default;
	Animal(string n, int w, string con) : name(n), weight(w), continent(con) { }
	void Print() {
		cout << "Name: " << name << "\tWeight: " << weight << "Continent: " << endl;
	}
};

class Pinguin : public Animal, public ISwim {
public:
	Pinguin() = default;
	Pinguin(string n, int w, string cont) : Animal(n, w, cont) {
		continent = cont;
	}
	virtual void Sound() {
		cout << "Pinguins sound" << endl;
	}
	virtual void Eat() {
		cout << "Pinguins eat fish" << endl;
	}
	virtual void Continent()const {
		cout << "Pinguins live in " << continent << endl;
	}
	virtual void Swim() {
		cout << "Pinguins swim" << endl;
	}
};

class Parrot : public Animal, public IFly {
public:
	Parrot() = default;
	Parrot(string n, int w, string cont) : Animal(n, w, cont) {
		continent = cont;
	}
	virtual void Sound() {
		cout << "Parrots sound like chirk-chirk" << endl;
	}
	virtual void Eat() {
		cout << "Parrots eat fruits and seeds" << endl;
	}
	virtual void Continent()const {
		cout << "Parrots live in warm countries" << endl;
	}
	virtual void Fly() {
		cout << "Parrots can fly" << endl;
	}
};

