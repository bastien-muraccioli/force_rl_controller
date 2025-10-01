#include "ForceRLController_Initial.h"

#include "../ForceRLController.h"

void ForceRLController_Initial::configure(const mc_rtc::Configuration & config) {}

void ForceRLController_Initial::start(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<ForceRLController &>(ctl_);
}

bool ForceRLController_Initial::run(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<ForceRLController &>(ctl_);
  output("OK");
  return true;
}

void ForceRLController_Initial::teardown(mc_control::fsm::Controller & ctl_)
{
  auto & ctl = static_cast<ForceRLController &>(ctl_);
}

EXPORT_SINGLE_STATE("ForceRLController_Initial", ForceRLController_Initial)
