#pragma once

class IRenderer
{
public:
    IRenderer() = default;

    virtual ~IRenderer() = default;

    virtual void resize(unsigned width, unsigned height) = 0;

    virtual void render() = 0;

};