#pragma once
#ifndef AIRGEADBANKING_INVESTDATA_H_
#define AIRGEADBANKING_INVESTDATA_H_
#endif //


//Investdata class
class InvestData {
public:
	void setInitialInvest(double t_initialInvest);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setAnnualInterest(double t_annualInterest);
	void setNumOfYears(int t_years);
	void setTotalWithDepo(double t_amount);
	void setTotalWithout(double t_amount);

	double getInitialInvest() { return m_initialInvest; }
	double getMonthlyDeposit() { return m_monthlyDeposit; }
	double getAnnualInterest() { return m_annualInterest; }
	int getNumOfYears() { return m_NumOfYears; }
	double getTotalWithDepo();
	double getTotalWithout();

	double calcInterestWithDepo();
	double calcInterestWithout();

private: //private classes
	double m_initialInvest = 0.0;
	double m_monthlyDeposit = 0.0;
	double m_annualInterest = 0.0;
	int m_NumOfYears = 0;
	double m_TotalWithDepo = 0.0;
	double m_TotalWithout = 0.0;

};
