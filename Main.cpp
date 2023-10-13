#include <iostream>
#include <math.h>
#include <string>
using namespace std;


class FitnessP {

private:
    double height;
    double weight;
    int age;
    string name;
    int gender;
    int workoutsPerWeek;
    double minsPerWorkout;

public:

    
    
    //Constructor 
    FitnessP(double h, double w, int a, string n, int g) {

        height = h;
        weight = w;
        age = a;
        name = n;
        gender = g;
    }

    FitnessP(double h, double w, int a, string n, int g, int wPW, double mPW) {

        height = h;
        weight = w;
        age = a;
        name = n;
        gender = g;
        workoutsPerWeek = wPW;
        minsPerWorkout = mPW;
    }

    //Getters

    double getGender()const{
        return this->gender;
    }

    double getHeight()const {
        return this->height;
    }

    double getWeight() const {
        return this->weight;
    }

    int getAge() const {
        return this->age;
    }

    string getName() const {
        return this->name;
    }

    int getWorkoutsPerweek(){
        return this -> workoutsPerWeek;
    }

    double getMinsPerWorkout(){
        return this -> minsPerWorkout;
    }

    // setters

    void setHeight(double h) {
        this->height = h;
    }

    void setWeight(double w) {
        this->weight = w;
    }

    void setAge(int a) {
        this->age = a;
    }

    void setName(string n) {
        this->name = n;
    }

    double ProteinNeeded() {
        double protein = this->weight;
        return protein;
    }

    int setWorkoutsPerweek(int wPW){
        return this -> workoutsPerWeek;
    }

    double setMinsPerWorkout(double mPw){
        return this -> minsPerWorkout;
    }

    void PrintEverything() {

    }


//Fix math errors
    double CaloriesNeeded(){
        double calories;
        double heightCM = this-> height * 30.48;
        double weightKG = this-> weight * 0.45359;

        if(this-> gender == 1){ 
            calories = 655.0 + (13.7 * weightKG) + (5 * heightCM) - (6.8 * this->age);// somethings wrong
        }
        else{
            calories = 66.0 + (9.6 * weightKG) + (1.8 * heightCM) - (4.7 * this->age);// somethings wrong
        }
        return calories;        
    }

    void printCals(){
        cout << "Your daily calorie intake should be " << CaloriesNeeded();
    }
    
    void printProtein(){
        double minP = this -> weight * 0.8;
        cout << "\nYour daily protein should be " << minP << " to " << ProteinNeeded() << " grams."<< endl;
    }

    double idealWeight();
};


int main() {

    //Data for object Alvin
    double height = 5.9;
    double weight = 155;
    int age = 20;
    string name = "Alvin";
    int gender = 3;

    FitnessP Alvin(height, weight, age, name, gender);

    Alvin.PrintEverything();

    Alvin.printCals();

    Alvin.printProtein();

    Alvin.idealWeight();

}
