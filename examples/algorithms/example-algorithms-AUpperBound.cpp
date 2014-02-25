/*!
 *  \file    example-algorithms-AUpperBound.cpp Example of using the upper 
 *           bound algorithm.
 *  \brief   Example of using the upper bound algorithm.
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    15.03.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Example of using the upper bound algorithm.

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Depth algorithms examples
    VERSION:   1.0
    CREATED:   15.03.2007 23:15:52

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
#include <Depth/include/application/IApplication.hpp>
#include <Depth/include/stream/CStreamStdOutput.hpp>
/*--------------------------------------------------------------------------*/
// Specific headers.
#include <Depth/include/algorithms/containers/AUpperBound.hpp>
#include <Depth/include/containers/CArray.hpp>
#include <Depth/include/containers/CListDC.hpp>
#include <Depth/include/containers/CListDL.hpp>
/*==========================================================================*/
// Common namespaces.
using namespace NDepth;
using namespace NDepth::NApplication;
using namespace NDepth::NContainers;
using namespace NDepth::NStream;
using namespace NDepth::NString;
/*--------------------------------------------------------------------------*/
// Specific namespaces.
using namespace NDepth::NAlgorithms::NContainers;
using namespace NDepth::NAlgorithms::NIterators;
/*==========================================================================*/
class CExample :
  public NApplication::IApplication
{
  Tsint main(const CStringBuffer<CString>& a_crArguments, const CStringBuffer<CString>& a_crEnvironment)
  { CALL
    IGNORE_UNUSED(a_crArguments);
    IGNORE_UNUSED(a_crEnvironment);

    // Use standard output stream of the current process.
    CStreamStdOutput stdoutput(true);

    CArray<Tsint> array;
    CListDC<Tsint> circle;
    CListDL<Tsint> list;

    // Fill the array.
    array.insertLast(1);
    array.insertLast(2);
    array.insertLast(3);
    array.insertLast(4);
    array.insertLast(5);
    array.insertLast(6);

    // Fill the double circled list.
    circle.insertCurrentForward(1);
    circle.insertNext(6);
    circle.insertNext(5);
    circle.insertNext(4);
    circle.insertNext(3);
    circle.insertNext(2);

    // Fill the double linked list.
    list.insertLast(1);
    list.insertLast(2);
    list.insertLast(3);
    list.insertLast(4);
    list.insertLast(5);
    list.insertLast(6);

    // Find upper bounds.
    stdoutput << STR("upperBound(array, 0).isValid() = ") << upperBound(array, CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBound(array, 4).getValueRef() = ") << upperBound(array, CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBound(array, 8).getValueRef() = ") << upperBound(array, CONSTS(8)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(array, 0).isValid() = ") << upperBoundPrev(array.getItLast(), CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBoundPrev(array, 4).getValueRef() = ") << upperBoundPrev(array.getItLast(), CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(array, 8).getValueRef() = ") << upperBoundPrev(array.getItLast(), CONSTS(8)).getValueRef() << ln;
    stdoutput << STR("upperBound(circle, 0).isValid() = ") << upperBound(circle, CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBound(circle, 4).getValueRef() = ") << upperBound(circle, CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBound(circle, 8).getValueRef() = ") << upperBound(circle, CONSTS(8)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(circle, 0).isValid() = ") << upperBoundPrev(circle.getItCurrent().getBackward(), CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBoundPrev(circle, 4).getValueRef() = ") << upperBoundPrev(circle.getItCurrent().getBackward(), CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(circle, 8).getValueRef() = ") << upperBoundPrev(circle.getItCurrent().getBackward(), CONSTS(8)).getValueRef() << ln;
    stdoutput << STR("upperBound(list, 0).isValid() = ") << upperBound(list, CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBound(list, 4).getValueRef() = ") << upperBound(list, CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBound(list, 8).getValueRef() = ") << upperBound(list, CONSTS(8)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(list, 0).isValid() = ") << upperBoundPrev(list.getItLast(), CONSTS(0)).isValid() << ln;
    stdoutput << STR("upperBoundPrev(list, 4).getValueRef() = ") << upperBoundPrev(list.getItLast(), CONSTS(4)).getValueRef() << ln;
    stdoutput << STR("upperBoundPrev(list, 8).getValueRef() = ") << upperBoundPrev(list.getItLast(), CONSTS(8)).getValueRef() << ln;

    return IApplication::EXIT_WITH_SUCCESS;
  }
} the_Application;
/*==========================================================================*/