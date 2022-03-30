#pragma once

#include <memory>

#include "EventT.hpp"
#include "SnakeInterface.hpp"

class Event;

class IEventHandler
{
public:
    virtual ~IEventHandler() = default;
    virtual void receive(std::unique_ptr<Event>) = 0;
    virtual void receive(std::unique_ptr<EventT<Snake::TimeoutInd>>) = 0;

};
