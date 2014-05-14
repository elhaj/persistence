/*
 * EntityManager.h
 *
 *  Created on: 13 mai 2014
 *      Author: SIDI
 */

#ifndef ENTITYMANAGER_H_
#define ENTITYMANAGER_H_
#include "ISQLEntity.h"
#include "IVersion.h"
#include <string>
#include <map>
class EntityManager
{
	public:
	bool save(ISQLEntity* entity);
	private :
	std::map<std::string,IVersion*> id_version;
	IVersion* getVersion(ISQLEntity* entity);

};


#endif /* ENTITYMANAGER_H_ */
