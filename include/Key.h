/*
 * Key.h
 *
 *  Created on: Feb 5, 2013
 *      Author: Akon Dey (akon.dey@gmail.com)
 */

#ifndef KEY_H_
#define KEY_H_

#include <vector>

namespace opends {

/**
 * A Key is a vector of strings which are used to
 * identify a data item in the datastore. In the
 * simplest case the Key is a single string.
 */
class Key : public std::vector<std::string>
{
};

}

#endif /* KEY_H_ */
