/*
 * Transaction.h
 *
 *  Created on: Feb 5, 2013
 *      Author: akon
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <Key.h>
#include <Value.h>
#include <Cursor.h>

namespace opends {

class Transaction {
public:
	/**
	 * Start the transaction.
	 *
	 * @return SUCCESS if the transaction was started successfully
	 * @return FAILURE if the transaction was not successfully started
	 */
	virtual int start() = 0;

	/**
	 * Abort the current transaction.
	 *
	 * @return SUCCESS if the transaction was successfully aborted
	 * @return FAIKURE if the transaction abort failed
	 */
	virtual int abort() = 0;

	/**
	 * Commit the transaction.
	 *
	 * @return SUCCESS if the transaction was committed successfully
	 * @return FAILURE if the transaction failed to commit - the error code is set accordingly
	 */
	virtual int commit() = 0;

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

	/**
	 * Create a Cursor.
	 *
	 * @return a valid Cursor object
	 * @return NULL if the cursor is not created successfully
	 */
	virtual Cursor *create_cursor() = 0;
protected:
	Transaction();
	virtual ~Transaction();
};

}

#endif /* TRANSACTION_H_ */
