/*
 * Datastore.h
 *
 *  Created on: Feb 5, 2013
 *      Author: Akon Dey (akon.dey@gmail.com)
 */

#ifndef DATASTORE_H_
#define DATASTORE_H_

#include <string>
#include <Transaction.h>

namespace opends {

/**
 * The Datastore class is used to abstract the underlying datastore implementation.
 */
class Datastore {
public:
	static Datastore *create(std::string &init);

	/**
	 * Open a session with the Datastore.
	 *
	 * @return SUCCESS on success
	 * @return FAILURE on failure and the error code is set
	 */
	virtual int open() = 0;

	/**
	 * Close the session with the Datastore.
	 *
	 * @return SUCCESS on success
	 * @return FAILURE on failure and the error code is set
	 */
	virtual int close() = 0;

	/**
	 * Create a Transaction object with the Datastore.
	 *
	 * @return NULL on failure and the error code is set
	 * @return pointer object to a valid Transaction object
	 */
	virtual Transaction *create_transaction() = 0;

	/**
	 * Fetch the record with the specified key.
	 *
	 * @return NULL if the operation failed the error code is set to specify the reason for the failure
	 * @return a pointer to the Value identified by the key
	 */
	virtual Value *fetch(Key &key) = 0;

	/**
	 * Store the record value with the specified key.
	 *
	 * @return SUCCESS on success
	 * @return FAILURE on failure
	 */
	virtual int store(Key &key, Value &value) = 0;

protected:
	Datastore(std::string &init);
	virtual ~Datastore();
};

}

#endif /* DATASTORE_H_ */
