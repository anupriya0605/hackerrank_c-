#include<bits/stdc++.h>

using namespace std;
#include<iostream>

using namespace std;

class Box {
    private:
        int l, b, h;

    public:
        // Default Constructor
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }

        // Parameterized Constructor
        Box(int length, int breadth, int height) {
            l = length;
            b = breadth;
            h = height;
        }

        // Copy Constructor
        Box(const Box& B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }

        int getLength() { return l; }
        int getBreadth() { return b; }
        int getHeight() { return h; }

        long long CalculateVolume() {
            return (long long)l * b * h;
        }

        // Overload < operator
        bool operator<(Box& B) {
            if (l < B.l) {
                return true;
            }
            if (b < B.b && l == B.l) {
                return true;
            }
            if (h < B.h && b == B.b && l == B.l) {
                return true;
            }
            return false;
        }

        // Overload << operator
        friend ostream& operator<<(ostream& out, Box& B) {
            out << B.l << " " << B.b << " " << B.h;
            return out;
        }
};
