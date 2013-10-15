#ifndef FIGHTER_TEMPLATE_HPP_
#define FIGHTER_TEMPLATE_HPP_
#include "type_difinition.hpp"
#include "FighterAttribute.hpp"
#include <string>
#include <array>

namespace AIGame {

enum /* class */ AttackType {normal, explode, penetrate, beatback};

/**
 * this is The template of fighter, which appears as individual object.
 * every fighter shall be a instance of one of the templates.
 */
struct FighterTemplate { 
	static const int MAX_UPGRADES = 4; // maximum number of upgrades available
	typedef std::array<FighterTemplate*, MAX_UPGRADES> UpgradesType;
	std::string       name; // name of the figther template
	FightingAttribute fighting_attr; // attributes used in combat
	LivingAttribute   living_attr; // attributes used in daily life
	AttackType        attack_type; // type of attackս��
	UpgradesType      upgrades; // fighter template(s) avaliable for upgrade. at most 4.
	money_type        price; // price of fighter

}; // Fighter Template

} // AIGame
#endif // FIGHTER_TEMPLATE_HPP_