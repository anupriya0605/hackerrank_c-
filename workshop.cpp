#include<bits/stdc++.h>

using namespace std;

// Define the Workshop structure
struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

// Define the Available_Workshops structure
struct Available_Workshops {
    int n;
    Workshop* array; // Array of workshops
};

// Function to initialize the Available_Workshops object
Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops;
    ptr->n = n;
    ptr->array = new Workshop[n];
    
    for (int i = 0; i < n; i++) {
        ptr->array[i].start_time = start_time[i];
        ptr->array[i].duration = duration[i];
        ptr->array[i].end_time = start_time[i] + duration[i];
    }
    
    return ptr;
}

// Function to calculate the maximum number of non-overlapping workshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    // We need to sort by end_time. 
    // Since ptr->array is a raw array, we can use a vector for easier sorting.
    std::vector<Workshop> workshops(ptr->n);
    for (int i = 0; i < ptr->n; i++) {
        workshops[i] = ptr->array[i];
    }

    // Sort using a lambda expression (C++11)
    std::sort(workshops.begin(), workshops.end(), [](const Workshop& a, const Workshop& b) {
        return a.end_time < b.end_time;
    });

    int count = 0;
    int last_end_time = 0;

    for (int i = 0; i < ptr->n; i++) {
        // If the current workshop starts after or exactly when the last one ended
        if (workshops[i].start_time >= last_end_time) {
            count++;
            last_end_time = workshops[i].end_time;
        }
    }

    return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
