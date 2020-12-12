/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essay.h
 * Author: andre
 *
 * Created on December 4, 2020, 9:38 PM
 */

#ifndef ESSAY_H
#define ESSAY_H

#include <iostream>
#include "GradedActivity.h"

using namespace std;


const int GRAMMAR = 30;
const int SPELLING = 20;
const int LENGTH = 20;
const int CONTENT = 30;

class Essay : public GradedActivity{
private:
    int grammar;
    int spelling;
    int length;
    int content;

public:
    
    Essay() : GradedActivity(){
        //set all member variables to 0
        grammar = 0;
        spelling = 0;
        length = 0;
        content = 0;
    }

    Essay(int g, int s, int l, int c) : GradedActivity(g+s+l+c)
    {

        grammar = g;
        spelling = s;
        length = l;
        content = c;
    }

    int getGrammar() const{
        return grammar;
    }

    int getSpelling() const{
        return spelling;
    }

    int getLength() const{
        return length;
    }

    int getContent() const{
        return content;
    }

    void setGrammar(int g){
        //validate input
        while(g < 0 || g > GRAMMAR){
            cout << "Grammar points should be between";
            cout << " 0 and " << GRAMMAR << "!";
            cout << " Enter again: ";
            cin >> g;
        }

        grammar = g;
        setScore(grammar + spelling
                 + length + content);
    }

    void setSpelling(int s){
        while(s < 0 || s > SPELLING)
        {
            cout << "Spelling points should be between";
            cout << " 0 and " << SPELLING << "!";
            cout << " Enter again: ";
            cin >> s;
        }

        spelling = s;

        setScore(grammar + spelling
                 + length + content);
    }

    void setLength(int l){

        while(l < 0 || l > LENGTH){
            cout << "Correct Length points should be between";
            cout << " 0 and " << LENGTH << "!";
            cout << " Enter again: ";
            cin >> l;
        }

        length = l;

        setScore(grammar + spelling
                 + length + content);
    }

    void setContent(int c){

        while(c < 0 || c > CONTENT){
            cout << "Content points should be between";
            cout << " 0 and " << CONTENT << "!";
            cout << " Enter again: ";
            cin >> c;
        }

        content = c;

        setScore(grammar + spelling
                 + length + content);
    }
};

#endif


