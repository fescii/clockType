class clockType
{
    public:

        clockType(int hours, int minutes, int seconds);
               //Constructor with parameters
               //The time i set according to the parameters
               //Post-Condition: hr = hours; min = minutes; sec = seconds
               //The constructor checks whether the values of hours, minutes and seconds are valid.
               //If the values are invalid, the default value 0 is assign.
        clockType();
        //default constructor
        //The values are set to default values.
        //Post-condition: hr = 0, min = 0, sec = 0

        void setTime(int hours, int minutes, int seconds);
           ///Function to set time
           ///The time is set according to the parameters.
            ///Postcondition: hr = hours; min = minutes; sec = seconds
            ///The Functions checks whether the values of hrs,mins and secs are valid.
            //If the value is invalid,the default value 0 is assign.


        void getTime(int& hours, int& minutes, int& seconds);
            //Function to return the time
            //Postcondition: hours = hr; minutes = min; seconds = sec


        void printTime() const;
            //Function to print Time.
            //Postcondition: The time is printed in form hh:mm:ss


        void incrementSeconds();
            //Function to increment the time by one second
            //Postcondition: The time is incremented by one second

        void incrementMinutes();
            //Function to increase minutes by one minute.
            //Post condition: The Time is incremented by one minute.


        void incrementHours();
            //Function to increase time by one hour.
            //Post-Condition: The time is incremented by one hour.


        bool equalTime(const clockType& otherClock) const;
            //Function to compare two times
            //Returns true if this time is equal to the otherClock, otherwise false.


    private:
        int hr;//Stores the hour
        int min; //Stores the minutes
        int sec; //stores the seconds

};

