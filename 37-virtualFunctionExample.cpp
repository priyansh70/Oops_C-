#include <bits/stdc++.h>
using namespace std;

class Course
{
protected:
    string title;
    float rating;

public:
    Course(string title, float rating)
    {
        this->title = title;
        this->rating = rating;
    }

    virtual void display(){
        // It it override by child classes
    };
};

class Videos : public Course
{
private:
    float videoLength;
    int videoQuality;

public:
    // Videos() {}
    Videos(string title, float rating, float videoLength, int videoQuality) : Course(title, rating)
    {
        this->videoLength = videoLength;
        this->videoQuality = videoQuality;
    }

    void display(void)
    {
        cout << "Title of Video --> " << title << endl;
        cout << "Rating of Video --> " << rating << endl;
        cout << "Quality of Video --> " << videoQuality << " P" << endl;
        cout << "Length of Video --> " << videoLength << " Minutes" << endl;
    }
};

class Articles : public Course
{
    int words;

public:
    // Articles() {}
    Articles(string title, float rating, int words) : Course(title, rating)
    {
        this->words = words;
    }

    void display(void)
    {
        cout << "Title of Article --> " << title << endl;
        cout << "Rating of Article --> " << rating << endl;
        cout << "Words in Article --> " << words << endl;
    }
};

int main()
{
    string title;
    float rating, videoLength;
    int words, videoQuality;

    title = "How the website works?";
    rating = 4.5;
    videoLength = 8.45;
    videoQuality = 1440;
    words = 643;

    // Create Object of Videos
    Videos lecture1(title, rating, videoLength, words);
    // lecture1.display();

    // Create Object of Articles
    Articles article1(title, rating, words);
    // article1.display();

    // Create Course Pointer
    Course *tutorial[2];
    tutorial[0] = &lecture1;
    tutorial[1] = &article1;

    tutorial[0]->display();
    tutorial[1]->display();
    return 0;
}

// Virtual Function
// 1 - They can not be static
// 2 - They are accessed by object pointer
// 3 - Virtual function can be friend of another class
// 4 - A virtual function in base class might not be used
// 5 - If a virtual function is defined in a base class. there is no necessarily of redefining iit in the derived classes