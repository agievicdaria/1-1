#pragma once

class IntPower {
private:
    double first;
    int second;

public:
    double GetFirst() const { return first; }
    int GetSecond() const { return second; }
    void SetFirst(double a);
    void SetSecond(int b);
    
    bool Init(double a, int b);
    void Read();
    void Display() const;
    double power() const;
};