#ifndef PARTICLE_H
#define PARTICLE_H

#define PARTICLES_COUNT 1024000

#include "cl.hpp"
class Particle
{
    public:
        Particle();
        cl_float3 position;
        cl_float3 color;
        cl_float3 velocity;
};

#endif // PARTICLE_H
