#pragma once
#include <iostream>

class CMobelPhone {
public:
	virtual int getPrice(void) = 0;
	virtual ~CMobelPhone() {}
protected:
	int m_price;
};

class CHwPhone :public CMobelPhone {
public:
	virtual int getPrice(void) = 0;
	virtual ~CHwPhone() {}
};

class CMate20 :public CHwPhone {
public:
	CMate20() {
		this->m_price = 5000;
	}

	virtual int getPrice(void) {
		return m_price;
	}
	virtual ~CMate20() {}
};

class CMate20Pro :public CHwPhone {
public:
	CMate20Pro() { this->m_price = 6000; }
	virtual int getPrice(void) { return m_price; }
	virtual ~CMate20Pro() {}
};

class CWirelessMate20 :public CHwPhone {
protected:
	CMate20 *m_pMate20;
public:
	CWirelessMate20(CMate20 *pPhone) { 
		this->m_pMate20 = pPhone;
		this->m_price = m_pMate20->getPrice() + 500;
	}
	virtual int getPrice(void) { return m_price; }
	virtual ~CWirelessMate20() {}
};

class CWirelessMate20Pro:public CHwPhone{
protected:
	CMate20Pro *m_pMate20Pr0;
public:
	CWirelessMate20Pro(CMate20Pro *pPhone) { 
		this->m_pMate20Pr0 = pPhone;
		this->m_price = m_pMate20Pr0->getPrice() + 500;
	}
	virtual int getPrice(void) { return m_price; }
	virtual ~CWirelessMate20Pro() {}
};

int main(int argc, char**argv) {
	CMobelPhone *pMate20 = new CMate20();
	CMobelPhone *pPhone1 = new CWirelessMate20(pMate20);
	std::cout << pPhone1->getPrice() << std::endl;

	CMobelPhone *pMate20Pro = new CMate20Pro();
	CMobelPhone *pPhone2 = new CWirelessMate20Pro(pMate20Pro);
	std::cout << pPhone2->getPrice() << std::endl;
}