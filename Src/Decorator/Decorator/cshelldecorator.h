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

#ifndef CSHELLDECORATOR_H_
#define CSHELLDECORATOR_H_

#include "cdecorator.h"

class CShellDecorator:public CDecorator
{
public:
	CShellDecorator(CMoblePhone*phone);
	~CShellDecorator();
	virtual void showPhoneInfo(void);
	void decoratorShell(void);
private:

};

CShellDecorator::CShellDecorator(CMoblePhone*phone) :CDecorator(phone)
{
}

CShellDecorator::~CShellDecorator()
{
	cout << __FUNCTION__ << endl;
}

void CShellDecorator::showPhoneInfo(void)
{
	this->m_phone->showPhoneInfo();
	this->decoratorShell();
}

void CShellDecorator::decoratorShell(void)
{
	cout << "this phone has decorator shell!" << endl;
}
#endif // CSHELLDECORATOR_H_