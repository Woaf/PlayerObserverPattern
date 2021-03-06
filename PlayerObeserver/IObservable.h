#pragma once

#include "PlayerData.h"

class IObserver;

class IObservable 
{
public:
	virtual void AddSubscriber (IObserver* subscriber) = 0;
	virtual PlayerData GetData () = 0;

protected:
	virtual void NotifyAll () const = 0;
};
