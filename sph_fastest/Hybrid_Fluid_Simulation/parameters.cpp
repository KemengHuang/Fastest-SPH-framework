#include "parameters.h"

///////////////////////////////////////////////////////////////////////////////////
// common
///////////////////////////////////////////////////////////////////////////////////
const bool DEBUG = false;
const float TIME_STEP = 0.004;
const float3 WORLD_SIZE = make_float3(4, 4, 4);
const float3 GRAVITY = make_float3(0.0f, -9.8f, 0.0f);

///////////////////////////////////////////////////////////////////////////////////
// SPH simulation
///////////////////////////////////////////////////////////////////////////////////
const float KERNAL_RADIUS = 0.03f;
const float MASS = 0.002f;
const float VICOSITY_COEFFICIENT = 10.0f;
const float REST_DENSITY = 1000.0f;
const float WALL_DAMPING = -0.5f;
const float GAS_CONSTANT = 1.0f;

const int pcisph_min_loops = 3;
const int pcisph_max_loops = 5;
const float pcisph_max_density_error_allowed = 10.0f;

///////////////////////////////////////////////////////////////////////////////////
// Eulerian simulation
///////////////////////////////////////////////////////////////////////////////////
const int eulerDim[3] = {16, 16, 16};