#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

/*추상 클래스 Character*/
class Character {
protected:
    string description;
public:
    virtual std::string getDescription() const { return description; };
    virtual int getAttack() const = 0;
    virtual int getSpeed() const = 0;
    virtual int getDefense() const = 0;
    virtual ~Character() {}
};

/*구체 캐릭터 클래스 : Knight*/
class Knight : public Character {
public:
    Knight() { description = "Knight"; }
    int getAttack() const override;
    int getSpeed() const override;
    int getDefense() const override;
};

/*구체 캐릭터 클래스 : Wizard*/
class Wizard : public Character {
public:
    Wizard() { description = "Wizard"; }
    int getAttack() const override; 
    int getSpeed() const override;
    int getDefense() const override;
};

/*구체 캐릭터 클래스 : Archer*/
class Archer : public Character {
public:
    Archer() { description = "Archer"; }
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

/*데코레이터 클래스스*/
class equip_testmentDecorator : public Character {
protected:
    Character* character;
public:
    equip_testmentDecorator(Character* c) : character(c) {}
    virtual ~equip_testmentDecorator() { delete character; }
    Character* getInner() const { return character; }
};

/*구체 데코레이터 클래스 : Armor*/
class Armor : public equip_testmentDecorator {
public:
    Armor(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

/*구체 데코레이터 클래스 : Boots*/
class Boots : public equip_testmentDecorator {
public:
    Boots(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

/*구체 데코레이터 클래스 : Staff*/
class Staff : public equip_testmentDecorator {
public:
    Staff(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

/*구체 데코레이터 클래스 : Sword*/
class Sword : public equip_testmentDecorator {
public:
    Sword(Character* c) : equip_testmentDecorator(c) {}
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};

/*구체 데코레이터 클래스 : Bow*/
class Bow : public equip_testmentDecorator {
public:
    Bow(Character* c) : equip_testmentDecorator(c) { }
    string getDescription() const override; 
    int getAttack() const override; 
    int getSpeed() const override; 
    int getDefense() const override; 
};
