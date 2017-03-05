#pragma once

#include <Core/thread.h>
#include <Perception/percept.h>

/// syncs percepts with modelWorld
struct SyncFiltered : Thread{
  Access_typed<PerceptL> percepts_filtered;
  ACCESS(mlr::KinematicWorld, percWorld)
  ACCESS(mlr::KinematicWorld, modelWorld)

  SyncFiltered();
  ~SyncFiltered();

  virtual void open();
  virtual void step();
  virtual void close(){}
};
