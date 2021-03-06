/*!
 *  \file    test-geometry-CVector2D.cpp Testing of the CVector2D class.
 *  \brief   Testing of the CVector2D class.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    01.07.2008
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Testing of the CVector2D class.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Depth geometry tests
    VERSION:   1.0
    CREATED:   01.07.2008 01:20:40

    EMAIL:     chronoxor@gmail.com
    WWW:       http://code.google.com/p/depth

    COPYRIGHT: (C) 2005-2010 The NULL workgroup. All Rights Reserved.
*/
/*--------------------------------------------------------------------------*/
/*
    Copyright (C) 2005-2010 The NULL workgroup.

    This program is free software; you can redistribute it  and/or  modify  it
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the  hope  that  it  will  be  useful,  but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General  Public  License
    for more details.

    You should have received a copy of the GNU General  Public  License  along
    with this program; if not, write to the Free Software Foundation, Inc., 59
    Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
/*--------------------------------------------------------------------------*/
/*
    FILE ID: $Id$

    CHANGE LOG:

    $Log$
*/
/*==========================================================================*/
// Common headers.
#include "unit-test.hpp"
/*--------------------------------------------------------------------------*/
// Specific headers.
#include <Depth/include/geometry/CVector2D.hpp>
#include <Depth/include/math/CMathConstants.hpp>
/*==========================================================================*/
// Common namespaces.
using namespace NDepth;
using namespace NDepth::NUnitTest;
/*--------------------------------------------------------------------------*/
// Specific namespaces.
using namespace NDepth::NGeometry;
using namespace NDepth::NMath;
/*==========================================================================*/
class CTest :
  public CUnitTest
{
  // Launch unit test.
  EUnitTestResult test()
  { CALL
    CVector2D vector;
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(0.0, 0.0));

    vector.set(10.0, 0.0);
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(10.0, 0.0));

    vector.normalize();
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(1.0, 0.0));

    vector = vector.translate(4.0, 5.0);
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(5.0, 5.0));

    vector = vector.scale(CONSTR(0.2), CONSTR(0.2));
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(1.0, 1.0));

    vector = vector.rotate(CMathConstants::PI_2);
    UT_ASSERT_EQUAL_VECTORS(vector, CVector2D(-1.0, 1.0));

    UT_ACCEPT;
  }

  // Compare two instances of CVector2D class.
  void UT_ASSERT_EQUAL_VECTORS(const CVector2D& v1, const CVector2D& v2)
  {
    const Treal delta = CONSTR(0.0001);
    UT_ASSERT_DELTA(v1.m_X, v2.m_X, delta);
    UT_ASSERT_DELTA(v1.m_Y, v2.m_Y, delta);
  }
} the_Test;
/*==========================================================================*/
