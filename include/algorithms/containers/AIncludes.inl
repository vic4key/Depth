/*!
 *  \file    AIncludes.inl Contains general template implementation of the
 *           container two sequences include test algorithm.
 *  \brief   Container two sequences include test algorithm (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    10.04.2007
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Container two sequences include test algorithm (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Template common containers algorithms
    VERSION:   1.0
    CREATED:   10.04.2007 20:35:52

    EMAIL:     chronoxor@gmail.com
    WWW:       http://code.google.com/p/depth

    COPYRIGHT: (C) 2005-2010 The NULL workgroup. All Rights Reserved.
*/
/*--------------------------------------------------------------------------*/
/*
    Copyright (C) 2005-2010 The NULL workgroup.

    This program is free software; you can redistribute it  and/or  modify  it
    under the terms of the GNU General Public License as published by the Free
    Software Foundation; either version 2 of the License, or (at your  option)
    any later version.

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
#ifndef __AINCLUDES_INL__
#define __AINCLUDES_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NAlgorithms {
/*--------------------------------------------------------------------------*/
namespace NContainers {
/*==========================================================================*/
/* INLINE ALGORITHM IMPLEMENTATIONS                                         */
/*==========================================================================*/
template <class T_Container1, class T_Container2>
inline Tbool includes(T_Container1& a_rContainer1, T_Container2& a_rContainer2)
{ CALL
  return NIterators::includesNext(getItFirst(a_rContainer1), getItFirst(a_rContainer2));
}
/*--------------------------------------------------------------------------*/
template <class T_Container1, class T_Container2, typename T_BinaryPredicate>
inline Tbool includes(T_Container1& a_rContainer1, T_Container2& a_rContainer2, T_BinaryPredicate a_fLessThan)
{ CALL
  return NIterators::includesNext(getItFirst(a_rContainer1), getItFirst(a_rContainer2), a_fLessThan);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
