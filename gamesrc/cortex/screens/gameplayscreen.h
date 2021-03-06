#pragma once

#include <aether/aether.h>

#include <TmxColor.h>

class RoomLayoutGameWorld;


namespace cortex {


class GameplayScreen : public aether::core::IScreen
{
public:
    GameplayScreen();

    void show() final;
    void hide() final;
    void render() final;
    void update(uint64_t delta) final;

private:
    std::shared_ptr<RoomLayoutGameWorld> m_gameWorld;

};


}
