#include <vector>

using namespace std;

enum Action_Valid_Target_Type {
   Charcter,
   Actor,
   Map, 
};
    
enum Action_Component_Stat{
    acrobatics,
    strength,
    dexterity,
    constitution,
    intelligence,
    wisdom,
    charisma,
    health_points,
    armor_class,
    armor_class_touch,
    armor_class_flat_footed,
    initiative,
    combat_maneuver_bonus,
    combat_maneuver_defense,
    base_attack_bonus,
    speed,
    spell_resistance,
    fortitude,
    reflex,
    will,
    appraise,
    bluff,
    climb,
    craft_1,
    diplomacy,
    disable_device,
    disguise,
    escape_artist,
    fly,
    handle_animal,
    heal,
    intimidate,
    knowledge_arcana,
    knowledge_dungeoneering,
    knowledge_engineering,
    knowledge_geography,
    knowledge_history,
    knowledge_local,
    knowledge_nature,
    knowledge_nobility,
    knowledge_planes,
    knowledge_religion,
    linguistics,
    perception,
    perform_1,
    profession_1,
    ride,
    sense_motive,
    sleight_of_hand,
    spellcraft,
    stealth,
    survival,
    swim,
    use_magic_device,
};

enum Action_Component_Source{
    None,
    Melee,
    Ranged,
    Spell,
    Supernatural_Ability,
    Extraordinary_Ability
};

enum Action_Component_Condition {
    None,
    Stunned,
    Dazed
};

enum Action_Component_Effect {
    None,
    Damage,
    Penalty,
    Drain,
    Bonus
};

enum Action_Component_Type {
    Untyped,
    Moral,
    Enchantment,
    Fear,
    Divine,
};

struct Action_Components {
    Action_Component_Source source;
    vector<Action_Component_Stat> stats;
    Action_Component_Condition condition;
    Action_Component_Effect effect;
    Action_Component_Type action_type;
    vector<Action_Valid_Target_Type> valid_targets;
};

enum Action_Type {
    Full_Round_Action,
    Standard_Action,
    Move_Action,
    Swift_Action,
    Imediate_Action,
    Free_Action
};

class Action {
    public:
        Action(Action_Type action_type, Action_Components action_components);
        ~Action();

    private:
        Action_Type _action_type;
        vector<Action_Components> _components;
        vector<Target_Type> _allowed_targets;
};