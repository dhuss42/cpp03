# cpp03
This Project dealt with the concept of Inheritance

## ex00 - Aaaaand... OPEN!
In this exercise, I implemented the ClapTrap class, a simple robot with basic combat mechanics. It had attributes for name, hit points, energy points, and attack damage, along with functions to attack, take damage, and repair itself. Each action consumed energy, and ClapTrap couldn’t act if it ran out of energy or health. Additionally, I made sure that constructors and destructors printed messages to track object creation and deletion.

## ex01 - Serena, my love!
In this exercise, I created a derived class called ScavTrap, which inherits from the ClapTrap class. In order to do so the public access specifier had to be changed to protected. This allows access for inherting classes. The ScavTrap class uses the attributes of ClapTrap, but it overrides the constructors, destructor, and attack function to print different messages. ScavTrap has its own special ability, guardGate(), which displays a message indicating that it is now in Gatekeeper mode. Destruction occurs in reverse order as the ScavTrap class first free the resources specific to it's class. After that the ClapTrap destructor is called freeing the specific resources to it's class.

## ex02 - Repetitive work
In this exercise, I implemented a FragTrap class that inherits from ClapTrap, similar to ScavTrap. The key differences are that FragTrap has different attributes (e.g., 100 hit points, 100 energy points, and 30 attack damage) and a unique special ability called highFivesGuys().

---
## Bonus

## ex03 -  Now it’s weird!
In this exercise, I created a DiamondTrap class that inherits from both FragTrap and ScavTrap, resulting in a "diamond" inheritance structure. DiamondTrap combines attributes and abilities from both classes, such as hit points from FragTrap, energy points from ScavTrap, and a unique special ability called whoAmI() to display both its name and ClapTrap’s name. The diamond problem arises here because both FragTrap and ScavTrap inherit from ClapTrap. It can cause ambiguity when a method or attribute is inherited from the same base class through multiple paths, leading to potential conflicts about which version of a method is being called. The virtual keyword helps solve this problem by ensuring that the most derived class method is called. Additionally, the using keyword can be used to specify which method to use when methods with the same name exist across inherited classes.
