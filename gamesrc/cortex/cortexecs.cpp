
#include "cortexecs.h"

namespace cortex {


CortexECS::CortexECS()
{
    pushSystem<AnimatorSystem>();
    pushSystem<PlayerControllerSystem>();
    pushSystem<GravitySystem>();
    pushSystem<JumperControllerSystem>();
}



}