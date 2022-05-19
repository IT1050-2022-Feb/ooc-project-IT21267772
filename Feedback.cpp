#include "Feedback.h"
#include <iostream>
#include <cstring>

using namespace std;

  Feedback::Feedback(){
        strcpy(feedbackID , "");
        strcpy(description , "");
    }
  Feedback::Feedback(const char pfeedbackID[] ,const char pdescription[] , RegisteredUser *pregister){
        strcpy(feedbackID , pfeedbackID);
        strcpy(description , pdescription);
        user = pregister;
    }
    void Feedback:: addRating(int pRating){
      
    }
    void Feedback:: displayFeedback(){
      
    }
   Feedback ::~Feedback(){
        cout<<"";
    }
