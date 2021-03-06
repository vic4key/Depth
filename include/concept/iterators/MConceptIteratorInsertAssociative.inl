/*!
 *  \file    MConceptIteratorInsertAssociative.inl Template checking
 *           conception. Checks if template argument is a associative
 *           insert iterator type.
 *  \brief   Associative insert iterator template checking conception (inline).
 *  \author  Ivan Shynkarenka aka 4ekucT
 *  \version 1.0
 *  \date    30.07.2006
 */
/*==========================================================================*/
/*
    FILE DESCRIPTION: Associative insert iterator template checking conception (inline).

    AUTHOR:    Ivan Shynkarenka aka 4ekucT
    GROUP:     The NULL workgroup
    PROJECT:   The Depth
    PART:      Iterators conception checking
    VERSION:   1.0
    CREATED:   30.07.2006 21:08:23

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
#ifndef __MCONCEPTITERATORINSERTASSOCIATIVE_INL__
#define __MCONCEPTITERATORINSERTASSOCIATIVE_INL__
/*==========================================================================*/
/* NAMESPACE DECLARATIONS                                                   */
/*==========================================================================*/
namespace NDepth {
/*--------------------------------------------------------------------------*/
namespace NConcept {
/*--------------------------------------------------------------------------*/
namespace NIterators {
/*==========================================================================*/
/* INLINE META-CLASS IMPLEMENTATIONS                                        */
/*==========================================================================*/
template <class T_Class>
inline MConceptIteratorInsertAssociative<T_Class>::MConceptIteratorInsertAssociative() :
  MConcept()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_Class>
inline MConceptIteratorInsertAssociative<T_Class>::~MConceptIteratorInsertAssociative()
{ CALL

}
/*--------------------------------------------------------------------------*/
template <class T_Class>
inline void MConceptIteratorInsertAssociative<T_Class>::constraints()
{ CALL
  Tbool result;

  // Check for the associative insert iterator types.
  typename T_Class::TType item;
  typename T_Class::TIterator it;

  // Check for the associative insert iterator operators.
  it = m_It;

  // Check for the associative insert iterator methods.
  result = m_It.insert(item, true);
}
/*==========================================================================*/
}
/*--------------------------------------------------------------------------*/
}
/*--------------------------------------------------------------------------*/
}
/*==========================================================================*/
#endif
