#include <iostream>

using namespace std;

int main() {
    cout << "l" << endl;

    return 0;
}


/*
WEEK 11: SOFTWARE DEVELOPMENT LIFE CYCLE WOOOOOOOOOOOOOOOOOOOOOOOOOOOO
> a structured approach to developing anything, like software
> a non-structured approach is fine, but having some structure is better as it means the devs know
what to develop first instead of switching between different parts of software
    > better to pin-point potential bugs/problems when developing/testing the software



> waterfall model
    > requirement engineering
    > design
    > implementation
    > testing 
    > maintenance

        > one stage leads to another, and can go back to a prev. stage, but only one stage
        e.g., design to implementation, but you can't go from implementation to requirement engineering
            > each stage must be completed fully before going to another stage
                > drawback could be that if requirements were to change, this model cannot adapt
                to the last-minute changes


> prototyping
    > a quick and cheap way of developing something, it's to develop, review and repeat the process
    until a final version of the software is made
    > drawback is that it can be time-expensive to develop software like this, if the project was big
        > this method can be beneficial for smaller projects


> incremental delivery
    > this method means to develop parts of the software, for which the target user tests once
    it's developed. doing so the devs gets feedback, before building the next part of the software
        > drawback could be that one part thet's being developed needs another part of the software
        for it to work, so results can differ from one iteration to another


AGILE APPROACHES
> this means developing something as fast as possible
> reaching to a target user as soon as possible for immediate feedback
    > promotes collaboration with target users

*** maybe look into SCRUM and KANBAN (development) ***

> RAD (Rapid Application Development)
    > given a fix time-frame to develop something WHICH MUST BE AGREED UPON
    > requirements must be met at a minimum before the time-frame, split into these categories:
        > must haves
        > should haves 
        > could haves
        > won't haves


> XP (Extreme Programming, not Windows)
    > similar to RAD such that there's small but frequent releases of software
    > customer collaboration is as it's strongest here, promoting pair programming
        > target audience is now part of the development team


> TDD (Test Driven Development)
    > this means to test functions of what could be the final code of the software
    before fully implementing that code for the software
        > this means that parts of the software will go through a series of tests made by the QA
            > if it fails to pass all tests, then the devs refactor the code
            > only when it passes, the final code is implemented

omegalul
*/