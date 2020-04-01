/*
 * MIT License
 *
 * Copyright (c) 2019 Whuer_XiaoJie <1939346428@qq.com>
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
#include "cscreen.h"
#include "../subject/csensor.h"

#include <iostream>

using namespace std;

CScreen::CScreen(CSensor *pSubject, string name)
{
	if (pSubject) {
		pSubject->attach(this);
		m_pSubject = pSubject;
	}
	m_name = name;
}

CScreen::~CScreen()
{
	if (m_pSubject) {
		m_pSubject->detach(this);
		m_pSubject = nullptr;
	}
}

void CScreen::update(void)
{
	if (m_pSubject) {
		cout << m_name << " know sensor value change to: " << m_pSubject->getValue() << endl;
	}
}
