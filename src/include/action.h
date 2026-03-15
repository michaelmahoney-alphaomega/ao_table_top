#include <vector>
struct Action_Payload {
    int acrobatics,
    int strength": 10,
    int dexterity": 10,
    int constitution": 10,
    int intelligence": 10,
    int "wisdom": 10,
    int "charisma": 10,
    int "health_points": 10,
    int "armor_class": 10,
    int "armor_class_touch": 10,
    int "armor_class_flat_footed": 10,
    int "initiative": 10,
    int "combat_maneuver_bonus": 10,
    int "combat_maneuver_defense": 10,
    int "base_attack_bonus": 10,
    int "speed": 10,
    int "spell_resistance": 10,
    int "fortitude": 10,
    int "reflex": 10,
    int "will": 10,
    int "appraise": 10,
    int "bluff": 10,
    int "climb": 10,
    int "craft_1": 10,
    int "diplomacy": 10,
    int "disable_device": 10,
    int "disguise": 10,
    int "escape_artist": 10,
    int "fly": 10,
    int "handle_animal": 10,
    int "heal": 10,
    int "intimidate": 10,
    int "knowledge_arcana": 10,
    int "knowledge_dungeoneering": 10,
    int "knowledge_engineering": 10,
    int "knowledge_geography": 10,
    int "knowledge_history": 10,
    int "knowledge_local": 10,
    int "knowledge_nature": 10,
    int "knowledge_nobility": 10,
    int "knowledge_planes": 10,
    int "knowledge_religion": 10,
    int "linguistics": 10,
    int "perception": 10,
    int "perform_1": 10,
    int "profession_1": 10,
    int "ride": 10,
    int "sense_motive": 10,
    int "sleight_of_hand": 10,
    int "spellcraft": 10,
    int "stealth": 10,
    int "survival": 10,
    int "swim": 10,
    int "use_magic_device": 10
    
}
enum Target_Type {
   Charcter,
   Actor,
   Map, 
};

enum Action_Type {
    MeleeAttack,
    RangedAttack,


}

class Action
{
    public:
        Action();
        ~Action();
    
    private:
        vector<Target_Type> allowable_targets;

        
};