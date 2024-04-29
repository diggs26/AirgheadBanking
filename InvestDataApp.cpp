// InvestDataApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "C:\Users\cori-leighdig_snhu\source\repos\InvestData\Header.h"

    void InvestData::setInitialInvest(double t_initialInvest) { // set initial investments
        this->m_initialInvest = t_initialInvest;
    }

    void InvestData::setMonthlyDeposit(double t_monthlyDeposit) { //set monthly investments
        this->m_monthlyDeposit = t_monthlyDeposit;
    }

    void InvestData::setAnnualInterest(double t_annualInterest) { //set annual interest
        this->m_annualInterest = t_annualInterest;
    }

    void InvestData::setNumOfYears(int t_NumOfYears) { //set number of years
        this->m_NumOfYears = t_NumOfYears;
    }

    double InvestData::calcInterestWithDepo() { // claculate interest with deposits
        return((this->m_TotalWithDepo) * ((this->m_annualInterest / 100) / 12));
    }

    double InvestData::calcInterestWithout() { // calculate interest without deposits
        return((this->m_TotalWithout) * ((this->m_annualInterest / 100) / 12));
    }

    void InvestData::setTotalWithout(double t_amount) { // set total wihtout deposit
        this->m_TotalWithout += t_amount;
    }

    void InvestData::setTotalWithDepo(double t_amount) { // set total with deposit
        this->m_TotalWithDepo += t_amount;
    }

    double InvestData::getTotalWithDepo() { //gets total with deposit
        return this->m_TotalWithDepo;
    }

    double InvestData::getTotalWithout() { // get total without deposit
        return this->m_TotalWithDepo;
    }

 
