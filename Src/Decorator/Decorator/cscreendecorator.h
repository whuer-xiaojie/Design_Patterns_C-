/*
 * MIT License
 *
 * Copyright (c) 2018 Whuer_XiaoJie <1939346428@qq.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

#ifndef CSCREENDECORATOR_H_
#define CSCREENDECORATOR_H_

#include "cdecorator.h"

class CScreenDecorator:public CDecorator
{
public:
	CScreenDecorator(CMoblePhone *phone);
	~CScreenDecorator();
	virtual void showPhoneInfo(void);
	void decoratorScreen(void);
private:

};

CScreenDecorator::CScreenDecorator(CMoblePhone *phone) :CDecorator(phone)
{

}

CScreenDecorator::~CScreenDecorator()
{
	cout << __FUNCTION__ << endl;
}

void CScreenDecorator::showPhoneInfo(void)
{
	this->m_phone->showPhoneInfo();
	this->decoratorScreen();
}

void CScreenDecorator::decoratorScreen(void)
{
	cout << "this phone has decorator the screen!" << endl;
}
#endif // CSCREENDECORATOR_H_