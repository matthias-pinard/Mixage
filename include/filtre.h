// -*- c++ -*-

#ifndef __FILTRE__H__
#define __FILTRE__H__

#include "producteur.h"
#include "consommateur.h"

// spécification d'un filtre

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \class	filtre
///
/// \brief	Interface associée à un filtre sonore. Ce filtre est considéré comme un producteur /
///		consommateur d'échantillons sonores. Il possède donc des entrées et des sorties.
///
/// \author	Jean Christophe Engel, Fabrice Lamarche, University Of Rennes 1
/// \date	23/04/2010
////////////////////////////////////////////////////////////////////////////////////////////////////
class filtre : public virtual producteur, public virtual consommateur {
public:

  ////////////////////////////////////////////////////////////////////////////////////////////////////
  /// \fn	virtual ~filtre()
  ///
  /// \brief	Destructeur virtuel. 
  ///
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  virtual ~filtre() {}
};

#endif // __FILTRE__H__
