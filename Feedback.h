#pragma once
#include "RegisteredUser.h"

class Feedback{
    private:
    char feedbackID[6];
    char description[20];
    int rating;
    RegisteredUser *user;

    public:
    Feedback();
    Feedback(const char pfeedbackID[] ,const char pdescription[], RegisteredUser *pregister);
    void addRating(int pRating);
    void displayFeedback();
    ~Feedback();
};

