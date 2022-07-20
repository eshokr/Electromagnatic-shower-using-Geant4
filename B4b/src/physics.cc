#include "physics.hh"

MyPhysicsList::MyPhysicsList()
{
    RegisterPhysics (new G4EmStandardPhysics());
    //RegisterPhysics (new G4EmStandardPhysics_option1());
    //RegisterPhysics (new G4EmStandardPhysics_option2());
    //RegisterPhysics (new G4EmStandardPhysics_option3());

    //RegisterPhysics (new G4OpticalPhysics());
  //  RegisterPhysics(new G4DecayPhysics());
   // RegisterPhysics(new G4RadioactiveDecayPhysics());
}

MyPhysicsList::~MyPhysicsList()
{}
