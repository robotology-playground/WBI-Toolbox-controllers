## Module description

This module implements a torque control balancing strategy.
It computes the interaction forces at the feet in order to stabilise a desired centroidal dynamics, which implies the tracking of a desired center-of-mass trajectory.
A cost function penalizing high joint torques - that generate the feet forces - is added to the control framework.

For details see [ On-line joint limit avoidance for torque controlled robots by joint space parametrization ](http://ieeexplore.ieee.org/document/7803379/)

### Compatibility
The repository contains five Simulink models: 
 - `BoundedTorqueControlR2017a.mdl`, which is generated by using Matlab  R2017a
 - `BoundedTorqueControlR2012bS80.mdl`, `BoundedTorqueControlR2015aS85.mdl`, `BoundedTorqueControlR2015bS86.mdl`, `BoundedTorqueControlR2016bS88.mdl`, which are exported from the previous model to be compatible with Matlab R2012b->now. 

 Also, the controller is tested in simulation by using Gazebo 7.0. Older versions of Gazebo may lead to scarse, or unstable, control performances.

### Launch procedure
The procedure to run the torque balancing module is still quite elaborate.
Users willing to use the module should follow this list.

- Set the environmental variable YARP_ROBOT_NAME in the bashrc according to the robot one wants to use (e.g. icubGazeboSim for simulations, or iCubGenova01, iCubParis01, etc. for experiments).
- (Simulation only) Launch yarpserver.
- (Simulation only) Launch gazebo. If you want to use the synchronization between the controller and the simulator to avoid real-time factor related problems, launch gazebo as follows: 
 `gazebo -slibgazebo_yarp_clock.so` 
 Insert iCub fixed into the world.
- Bring the robot in a suitable home position (e.g. `$ yarpmotorgui --from homePoseBalancing.ini` and then press on the 'Home All' button)
- Launch `wholeBodyDynamicsTree` as follows: `$ wholeBodyDynamicsTree`
- Open the simulink model `BoundedTorqueControlX.mdl` depending on version X.
- Run the module 

## Module details
### Configuration file
At start, the module calls the initialization file initTorqueBalancing.m. Once open, this file contains some configuration variables.
#### General section
- `robotName : port prefix of the robot to connect to, i.e. 'icubSim' for simulations, or 'icub' for experiments`
- `localName`: module name. Ports will be opened with this name. Default to `impedance`
- `simulationTime`: time of the simulation/experiment

#### Gains
The gains for the robot specified by the variable YARP_ROBOT_NAME can be found in the folder `robots/YARP_ROBOT_NAME/gains.m`. This file contains several gains, among which

- `WBT_wbiList`: list of controlled joints
- `PORTS.WBDT_RIGHTLEG_EE`: name of the port from which the wrench applied at the leg can be read
- `sat.torque`: saturations to be applied to the output torques. It must be a positive value.
- `model.Kp`: proportional gains for each joint
- `model.Kd`: derivative gains for each joint
- `model.trajectory`: defines which kind of trajectory will be used for the controlled joints

#### Citing this contribution
In case you want to cite the content of this module please refer to [ On-line joint limit avoidance for torque controlled robots by joint space parametrization ](http://ieeexplore.ieee.org/document/7803379/) and use the following bibtex entry:

```
@INPROCEEDINGS{7803379,
author={M. Charbonneau and F. Nori and D. Pucci},
booktitle={2016 IEEE-RAS 16th International Conference on Humanoid Robots (Humanoids)},
title={On-line joint limit avoidance for torque controlled robots by joint space parametrization},
year={2016},
pages={899-904},
keywords={Lyapunov methods;convergence;humanoid robots;manipulators;stability;time-varying systems;torque control;Lyapunov;control laws;convergence;exogenous states;fully-actuated manipulators;joint space parametrization;online joint limit avoidance;parametrized terms;stability;stabilization;time-varying desired joint trajectory;time-varying reference trajectories;torque controlled robots;torque-controlled iCub humanoid robot;two degrees-of-freedom;Aerospace electronics;Asymptotic stability;Convergence;Manipulators;Stability analysis;Trajectory},
doi={10.1109/HUMANOIDS.2016.7803379},
month={Nov},}
```