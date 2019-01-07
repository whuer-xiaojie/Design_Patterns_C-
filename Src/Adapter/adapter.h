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

#ifndef ADAPTER_H_
#define ADAPTER_H_

#include <iostream>
#include <string>

#include "adaptree.h"
using namespace std;

class CTarget
{
public:
	CTarget();
	virtual ~CTarget();

	virtual void opreator(void) = 0;//定义标准接口（实际需要的接口）
private:

};

//类模式，通过public实现接口继承，private时间实现继承
class CAdapter:public CTarget,private CAdaptree
{
public:
	CAdapter();
	~CAdapter();
	virtual void opreator(void);
private:

};

/*******************************************************************/
//对象模式，采用组合方式实现接口的适配器
class CAdapter1:public CTarget
{
public:
	CAdapter1();
	CAdapter1(CAdaptree *adaptree);
	~CAdapter1();
	virtual void opreator(void);
private:
	CAdaptree *m_Adaptree;
};


#endif // APAPTER_H_