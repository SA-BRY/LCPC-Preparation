/*
    Problem: Train Rearrangement (Stack Simulation)

    Description:
    There are N train carriages, numbered from 1 to N, arriving in order: 1, 2, 3, ..., N.
    You are allowed to use a stack-based station (LIFO) to temporarily hold carriages.

    Your task is to determine whether it is possible to produce a given output sequence
    of the carriages using only this station.

    Rules:
    - You can push carriages into the station in the order they arrive.
    - You can pop carriages from the station if the top matches the next number in the output sequence.
    - You cannot rearrange the incoming order directly; only the stack can be used to delay carriages.

    Input:
    - An integer N (1 ≤ N ≤ 1000), the number of train carriages.
    - A sequence of N integers (a permutation of 1 to N), representing the desired output order.

    Output:
    - Print "Yes" if it's possible to produce the sequence using the stack.
    - Otherwise, print "No".

    Example 1:
    Input: 5
    5 4 3 2 1
    Output: Yes

    Example 2:
    Input: 5
    2 1 5 3 4
    Output: No

    Tags: stack, simulation, greedy
*/
#include <iostream>
#include <stack>
using namespace std;
bool isSequence(Arr[],int n){
    


}