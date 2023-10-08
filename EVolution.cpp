#include <bits/stdc++.h>
using namespace std;

class EVCalculator
{
private:
    double co2EmissionPerKm;     // CO2 emissions per kilometer in traditional vehicle running on disel/petrol(in grams)
    double otherPollutantsPerKm; // Other pollutants per kilometer in traditional vehicle (in grams)
    double costPerKmPetrol;      // Cost per kilometer for petrol vehicle (in Rs)
    double costPerKmEV;          // Cost per kilometer for EV (in Rs)

public:
    EVCalculator(double co2Emission, double pollutants, double costPetrol, double costEV)
        : co2EmissionPerKm(co2Emission), otherPollutantsPerKm(pollutants),
          costPerKmPetrol(costPetrol), costPerKmEV(costEV) {}

    void calculateAndDisplayBenefits(double travelDistance)
    {
        double co2Saved = travelDistance * (co2EmissionPerKm - 0);           // EV produces zero CO2 emissions
        double pollutantSaved = travelDistance * (otherPollutantsPerKm - 0); //  EV produces zero other pollutants
        double costSaved = travelDistance * (costPerKmPetrol - costPerKmEV);
        cout << "\n******************************************************\n\n";
        cout << "Estimated benefits of using an EV:" << endl
             << endl;
        cout << "CO2 Emissions Reduced: " << co2Saved << " grams" << endl;
        cout << "Other Pollutants Reduced: " << pollutantSaved << " grams" << endl;
        cout << "Cost Savings: " << costSaved << " Rs" << endl;
    }
    void trees(int n)
    {

        double treesSavedPerDay = 0.021;          // Average number of trees saved per day per EV (assumed value)
        double treesSaved = treesSavedPerDay * n; // the number of trees saved

        cout << "Number of trees saved from pollution: " << n << endl
             << endl;
    }
};

class EVBike
{
public:
    EVBike(const string &name, double price, double mileage) : name(name), price(price), mileage(mileage) {}

    const string &getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

    double getMileage() const
    {
        return mileage;
    }

private:
    string name;
    double price;
    double mileage;
};

int main()
{

    while (true)
    {
        cout << "                                                      ********************************* \n";
        cout << "                                                                USER INTERFACE\n";
        cout << "                                                      ********************************* \n";

        cout << "                                        -----Welcome dear user on our platfrom thank you for visiting-----\n\n\n\n";
        int press = 0;
        cout << "Please select What you want :\n"; // taking input from user
        cout << "Enter 1 : EV benefits calculator\n";
        cout << "Enter 2 : Personalized EV recommendation\n";
        cout << "Enter 3 : Get information and tips related to efficient use of EV's\n";
        cout << "Enter 4 : Exit" << endl;

        cin >> press;
        cout << endl;

        if (press == 1)
        {

            cout << "                                                     ----Lets calculate EV's benefits----\n\n";
            double co2Emission, pollutants, costPetrol, costEV;

            cout << "Enter CO2 emissions per km in traditional vehicle (grams): ";
            cin >> co2Emission;

            cout << "Enter other pollutants per km in traditional vehicle (grams): ";
            cin >> pollutants;

            cout << "Enter cost per km for petrol vehicle (in Rs): ";
            cin >> costPetrol;

            cout << "Enter cost per km for EV (in Rs): ";
            cin >> costEV;

            EVCalculator calculator(co2Emission, pollutants, costPetrol, costEV);

            double travelDistance;
            cout << "Enter travel distance (km): ";
            cin >> travelDistance;

            calculator.calculateAndDisplayBenefits(travelDistance);

            cout << "\n\n---LETS SEE OUR CONTRIBUTION IN INCREASING GREENERY---\n";
            int days;
            cout << "Enter the number of days since using EV: ";
            cin >> days;
            calculator.trees(days);
        }

        else if (press == 2)
        {

            cout << "********Lets personalize your EV********\n\n";
            EVBike bikes[] = {
                EVBike("Zippy eBike", 120000.0, 75.0),
                EVBike("GreenRide Eco", 150000.0, 60.0),
                EVBike("EcoCruise Lite", 110000.0, 85.0),
                EVBike("SwiftEV City", 130000.0, 70.0),
            };

            int age;
            cout << "Enter your age: ";
            cin >> age;

            if (age < 18)
            {
                cout << "You can't drive as to drive you should have a age of 18years(minimum)." << endl;
            }
            else if (age >= 18 && age < 30)
            {
                cout << "Recommended EV bike for you is: " << bikes[0].getName() << endl
                     << "Price: " << bikes[0].getPrice() << endl
                     << "Mileage: " << bikes[0].getMileage() << endl;
            }
            else if (age >= 30 && age < 50)
            {
                cout << "Recommended EV bike for you is: " << bikes[3].getName() << endl
                     << "Price: " << bikes[3].getPrice() << endl
                     << "Mileage: " << bikes[3].getMileage() << endl;
            }
            else
            {
                cout << "Recommended EV bike for you is: " << bikes[1].getName() << endl
                     << "Price: " << bikes[1].getPrice() << endl
                     << "Mileage: " << bikes[1].getMileage() << endl;
            }
        }
        else if (press == 3)
        {

            cout << "Welcome  Evs Ennthuthiastic to the world of EVs" << endl;
            cout << "[Introduction]" << endl
                 << endl
                 << "Hey, everyone! Welcome back to my channel. Today, we're going to delve into the electrifying world of electric vehicles, or EVs. EVs are taking the automotive industry by storm, and there's so much to discover. So, join me on this journey as we explore the cutting-edge technology, environmental benefits, and the future of transportation." << endl
                 << "[What are Electric Vehicles?]" << endl
                 << "First things first, what exactly are electric vehicles? Well, EVs are cars, trucks, and even motorcycles that run on electricity instead of traditional gasoline or diesel. They use rechargeable batteries to store energy, and electric motors to power the wheels. This means no tailpipe emissions, making them a cleaner and more sustainable option for transportation." << endl
                 << "[The Rise of EVs]" << endl
                 << "Electric vehicles have come a long way in recent years. We've seen a surge in the popularity of EVs due to advancements in battery technology, increased charging infrastructure, and a growing awareness of environmental concerns. Companies like Tesla, Nissan, Chevrolet, and many others are producing innovative EV models that are not only environmentally friendly but also high-performance and stylish." << endl
                 << "[Environmental Benefits]" << endl
                 << "One of the most significant advantages of electric vehicles is their positive impact on the environment. EVs produce zero tailpipe emissions, which means they don't release harmful pollutants like carbon dioxide (CO2), nitrogen oxides (NOx), or particulate matter. By switching to electric vehicles, we can reduce air pollution, combat climate change, and work towards a more sustainable future. " << endl
                 << "[Charging Infrastructure]" << endl
                 << "To make EVs practical for everyday use, a robust charging infrastructure is crucial. Fortunately, we're seeing rapid growth in charging stations worldwide. From home chargers to public fast-charging networks, it's becoming easier than ever to keep your EV juiced up." << endl
                 << "[The Future of Transportation]" << endl
                 << "The future of transportation is undoubtedly electric. Governments and automakers are investing heavily in EV technology, and many countries are setting ambitious goals to phase out internal combustion engines in the coming decades. As the industry evolves, we can expect to see even more exciting developments, such as longer battery ranges, faster charging, and autonomous driving capabilities." << endl
                 << "[Conclusion]" << endl
                 << "In conclusion, electric vehicles are not just a trend; they're a pivotal part of our journey towards a more sustainable and eco-friendly future. The electric revolution is here, and it's electrifying in every sense of the word. If you're considering making the switch to an EV, or if you're simply interested in the latest advancements in automotive technology, be sure to subscribe and stay tuned for more exciting content on this channel." << endl
                 << "Thanks for joining me today on this electric adventure. Don't forget to like, subscribe, and hit that notification bell to stay updated on all things electric vehicles. Until next time, keep driving green and stay charged!" << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}