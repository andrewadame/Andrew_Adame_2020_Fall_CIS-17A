/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Time.h
 * Author: andre
 *
 * Created on December 4, 2020, 9:21 PM
 */

#ifndef TIME_H
#define TIME_H

class Time
{
protected:
   int hour;
   int min;
   int sec;
public:
   // DEFAULT CONSTRUCTOR
   Time()
      { 
        hour = 0; 
        min = 0; 
        sec = 0; 
      }

   //CONSTRUCTOR
   Time(int h, int m, int s)
      { 
        hour = h; 
        min = m; 
        sec = s; 
      }

   //ACCESSOR FUNCTIONS
   const int getHour()
      { 
        return hour; 
      }

   const int getMin()
      { 
       return min; 
      }

   const int getSec()
      { 
       return sec; 
      }

    //MUTATOR FUNCTIONS
    void setHour(int h)
        { 
          hour = h; 
        }

    void setMin(int m)
        { 
          min = m; 
        }

    void setSec(int s)
        { 
          sec = s; 
        }
};
#endif

