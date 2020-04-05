#pragma once
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
	CHwPhone *m_pPhone;
public:
	CWirelessMate20(CMate20 *pPhone) {
		this->m_pPhone = pPhone;
		this->m_price = m_pPhone->getPrice() + 500;
	}
	virtual int getPrice(void) { return m_price; }
	virtual ~CWirelessMate20() {}
};

int main(int argc, char**argv) {
	CMobelPhone *pMate20 = new CMate20();
	CMobelPhone *pPhone1 = new CWirelessMate20(pMate20);
	std::cout << pPhone1->getPrice() << std::endl;

	CMobelPhone *pMate20Pro = new CMate20Pro();
	CMobelPhone *pPhone2 = new CWirelessMate20(pMate20Pro);
	std::cout << pPhone2->getPrice() << std::endl;
}