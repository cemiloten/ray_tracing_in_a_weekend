#ifndef path_tracer_hitable_h
#define path_tracer_hitable_h

#include "ray.h"

class Material;

struct HitRecord {
    float t;
    Vec3 p;
    Vec3 normal;
    Material* material;
};

class Hitable {
public:
    virtual bool hit(
        const Ray& r, float t_min, float t_max, HitRecord& rec) const = 0;
};

#endif
