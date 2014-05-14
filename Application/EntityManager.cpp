/*
 * EntityManager.cpp
 *
 *  Created on: 13 mai 2014
 *      Author: SIDI
 */

#include "EntityManager.h"

IVersion* EntityManager::getVersion(ISQLEntity* entity)
{
return id_version[entity->getId()];
}
