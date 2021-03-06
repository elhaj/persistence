/*
 * MySQLEntity.h
 *
 *  Created on: 2 mai 2014
 *      Author: SIDI
 */

#ifndef MYSQLENTITY_H_
#define MYSQLENTITY_H_
#include <map>
#include <string>
#include "ISQLEntity.h"
class MySQLEntity : public ISQLEntity
{
public :
	 MySQLEntity();
	 ~MySQLEntity();
	 bool save(SQLSession session);
	 std::string* getField(std::string fieldName);
	 void setFieldValue(std::string fieldName, std::string value);
	 void display();
	 std::string getId() const;
	 void setId(std::string id);
private :
	 std::string id;
	 std::map<std::string, std::string> fields;
	 std::string primaryKeys[];
};
#endif /* MYSQLENTITY_H_ */
