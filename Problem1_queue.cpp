#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<char> firstQueue, secondQueue;
    int length1,length2;

    cin >> length1 >> length2;
    unordered_map<char,int> mp1,mp2,mp3;
    int currentIndex;
    for(int i=0; i< length1; i++)
    {
        char x;
        cin >> x;
        firstQueue.push(x);
        mp1[x]++;
    }

    for(int i=0; i< length2; i++)
    {
        char x;
        cin >> x;
        secondQueue.push(x);
        mp2[x]++; 
    }

    
    cin >> currentIndex;
    for(auto &it: mp1)
    {
        if(mp2[it.first] == 0)
        {
            mp3[it.first] = 1;
        }
    }
    currentIndex--;
    while(currentIndex--)
    {
        firstQueue.pop();
    }
    while(!firstQueue.empty())
    {
        if(mp3[firstQueue.front()] == 0)
        {
            cout << firstQueue.front()  << endl;
            return 0;
        }
        firstQueue.pop();
    }
    cout << "No element" << endl;
    return 0;
}