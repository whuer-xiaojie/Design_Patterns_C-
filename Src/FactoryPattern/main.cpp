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
#include<iostream>

#include "Product/cproductbase.h"
#include "Product/cproducta.h"
#include "Product/cproductb.h"
#include "Product/cmultibase.h"
#include "Product/cproductx.h"
#include "Product/cproducty.h"

#include "SimpleFactory/CSimpleFactory.h"

#include "MethodFactory/cmfactory.h"
#include "MethodFactory/cproductafactory.h"
#include "MethodFactory/cproductbfactory.h"

#include "AbstractFactory/cabstractfactory.h"
#include "AbstractFactory/cabstractfactoryax.h"
#include "AbstractFactory/cabstractfactoryby.h"


using namespace std;

void simpleFactoryTest(void)
{
	SimpleFactory simpleFactory;

	CProductBase *pProductA = simpleFactory.createProduct(e_Product_A);

	CProductBase *pProductB = simpleFactory.createProduct(e_Product_B);

	pProductA->showProduct();
	pProductB->showProduct();

	delete pProductA;
	delete pProductB;
}

void methodFactoryTest(void)
{
	CMFactory *mFactoryA = new CProductAFactory();
	CProductBase *pA = mFactoryA->createProduct();
	pA->showProduct();

	delete mFactoryA;
	delete pA;

	CMFactory *mFactoryB = new CProductBFactory();
	CProductBase *pB = mFactoryB->createProduct();
	pB->showProduct();

	delete mFactoryB;
	delete pB;
}

void abstractFactorytTest(void)
{
	CAbstractFactory *pFacotryAX =new CAbstractFactoryAX();
	CProductBase *pA = pFacotryAX->createProduct();
	CMultiBase *pX = pFacotryAX->createmultiProduct();

	pA->showProduct();
	pX->showMulti();

	delete pFacotryAX;
	delete pA;
	delete pX;

	CAbstractFactory *pFactoryBY = new CAbstractFactoryBY();
	CProductBase *pB = pFactoryBY->createProduct();
	CMultiBase *pY = pFactoryBY->createmultiProduct();

	pB->showProduct();
	pY->showMulti();

	delete pFactoryBY;
	delete pY;
	delete pB;
}

int main(int argc, char **argv)
{
	simpleFactoryTest();

	methodFactoryTest();

	abstractFactorytTest();

	system("pause");
	return 0;
}