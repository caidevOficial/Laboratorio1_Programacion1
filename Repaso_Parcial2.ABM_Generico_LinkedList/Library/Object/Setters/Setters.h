/*
 * ============================================================================
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 * ============================================================================
 *
 * Version     : Beta 3.1.0 [Beta v3.1.0] - FacuFalcone_LinkedList_SaintSeiya_[Linux]
 * ============================================================================
 */

#include "../Object.h"

#ifndef LIBRARY_Object_SETTERS_SETTERS_H_
#define LIBRARY_Object_SETTERS_SETTERS_H_

/* Setters: [ID] */
/**
 * @brief  Set the new ID on the knight.
 * @param  this
 * @param  id
 * @return Return 1 if can, else 0.
 */
int Object_setID(Object *this, int *id);

/* Setters: [Cosmos Power] */
/**
 * @brief  Set the new power on the knight.
 * @param  this
 * @param  cosmosLevel
 * @return Return 1 if can, else 0.
 */
int Object_setCosmosLevel(Object *this, float cosmosLevel);

/* Setters: [Name] */
/**
 * @brief  Set the new name on the knight.
 * @param  this
 * @param  name
 * @return Return 1 if can, else 0.
 */
int Object_setName(Object *this, char *name);

/* Setters: [Constellation] */
/**
 * @brief  Set the new constellation on the knight.
 * @param  this
 * @param  constellationName
 * @return Return 1 if can, else 0.
 */
int Object_setConstellation(Object *this, char *constellationName);

/* Setters: [Armor Type] */
/**
 * @brief  Set the new armor on the knight.
 * @param  this
 * @param  armor
 * @return Return 1 if can, else 0.
 */
int Object_setArmorType(Object *this, char *armor);

/* Setters: [Level] */
/**
 * @brief Set the new level on the knight.
 * @param this
 * @param level
 * @return Return 1 if can, else 0.
 */
int Object_setLevel(Object *this, int level);

/* Setters: [All Info] */
/**
 * @brief  Set all the fields on the knight.
 * @param  this
 * @param  id
 * @param  name
 * @param  cosmosName
 * @param  armorType
 * @param  level
 * @param  powerLevel
 * @return Return 1 if can, else 0.
 */
int Object_setAllInfo(Object *this, int *id, char *name,
		char *constellationName, char *armorType, int level,
		float cosmosLevel);

#endif /* LIBRARY_Object_SETTERS_SETTERS_H_ */
