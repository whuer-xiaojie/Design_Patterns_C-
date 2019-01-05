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

#ifndef CABSTRACTFACTORYB_H_
#define CABSTRACTFACTORYB_H_

#include "cabstractfactory.h"
#include "../Product/cproductb.h"
#include "../Product/cproducty.h"

class CAbstractFactoryBY:public CAbstractFactory
{
public:
	CAbstractFactoryBY();
	virtual ~CAbstractFactoryBY();

	CProductBase* createProduct();
	CMultiBase* createmultiProduct();
private:

};

CAbstractFactoryBY::CAbstractFactoryBY()
{
}

CAbstractFactoryBY::~CAbstractFactoryBY()
{
}

CProductBase* CAbstractFactoryBY::createProduct()
{
	return new CProductB();
}

CMultiBase* CAbstractFactoryBY::createmultiProduct()
{
	return new CProductY();
}

#endif // CABSTRACTFACTORYB_H_