/*
 * Datastore.cxx
 *
 *  Created on: Feb 5, 2013
 *      Author: Akon Dey (akon.dey@gmail.com)
 */

#include <Datastore.h>

namespace opends {

/**
 * Create (or return) a pointer to a Datastore object.
 *
 * The init string is of the format:
 *     <datastore_type>://<datastore specific initialization string>
 *
 * For instance this could be:
 *     wiredtiger://dbpath
 * where the datastore is wiredtiger and the initialization parameter is dbpath.
 *
 * @return the Datastore pointer requested usine the init string
 */
Datastore *Datastore::create(std::string &init) {
	// TODO: the following is the algorithm
	// creation steps:
	// parse the init string and extract the datastore name and initialization parameters.
	// lookup the Datastore implementation using the name
	// call the DatastoreImplementation::Create(std::string &) method with the initialization parameters
	// returns a valid object on success and NULL on failure
	// set the error code on failure
	// else return the created Datastore
	return NULL;
}

}



