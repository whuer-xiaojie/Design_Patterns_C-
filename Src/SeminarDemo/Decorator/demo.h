#include <iostream>

class CMobelPhone {
public:
	virtual int getPrice(void) = 0;
	virtual ~CMobelPhone() {}
protected:
	int m_price;
};

class CHwPhone:public CMobelPhone {
public:
	virtual int getPrice(void) = 0;
	virtual ~CHwPhone(){}
};

class CMate20 :public CHwPhone {
public:
	CMate20(){
		this->m_price = 5000;
	}

	virtual int getPrice(void) {
		return m_price;
	}
	virtual ~CMate20(){}
};

class CMate20Pro :public CHwPhone {
public:
	CMate20Pro() {this->m_price = 6000;}
	virtual int getPrice(void) {return m_price;}
	virtual ~CMate20Pro() {}
};

int main(int argc, char**argv) {
	CMobelPhone *pPhone1 = new CMate20();
	std::cout << pPhone1->getPrice() << std::endl;

	CMobelPhone *pPhone2 = new CMate20Pro();
	std::cout << pPhone2->getPrice() << std::endl;
}