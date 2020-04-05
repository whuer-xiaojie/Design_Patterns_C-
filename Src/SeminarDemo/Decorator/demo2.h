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

class CWirelessMate20 :public CMate20 {
public:
	CWirelessMate20() { this->m_price = 5000 + 500; }
	virtual int getPrice(void) { return m_price; }
	virtual ~CWirelessMate20() {}
};

class CWirelessMate20Pro :public CMate20Pro {
public:
	CWirelessMate20Pro() { this->m_price = 6000 + 500; }
	virtual int getPrice(void) { return m_price; }
	virtual ~CWirelessMate20Pro() {}
};

int main(int argc, char**argv) {
	CMobelPhone *pPhone1 = new CWirelessMate20();
	std::cout << pPhone1->getPrice() << std::endl;

	CMobelPhone *pPhone2 = new CWirelessMate20();
	std::cout << pPhone2->getPrice() << std::endl;
}