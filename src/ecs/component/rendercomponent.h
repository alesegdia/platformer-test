#pragma once

#include <aether/aether.h>

struct RenderComponent
{
    const aether::graphics::TextureRegion* texture;
    aether::math::Vec2f render_offset = aether::math::Vec2f(0,0);
    bool flip = false;
};