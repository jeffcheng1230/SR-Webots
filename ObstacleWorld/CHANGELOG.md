#Changelog
All notable changes to this project will be documented in this file

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/)

## [Unreleased]

## Added
- Quit button to remove robot from the simulation

## [Release 4] - 2020-08-05

### Added
- Robots are now placed into the world by the supervisor
- Export log of events after each game
- Positions of tiles, humans and obstacles randomly generated and automatically calculated based on tile scale

### Changed
- There is now no need to specify robot type when sending data for estimated victim detection and exit messages.   
For example from `struct.pack('i i i c', data, data1, data2, data3)` to `struct.pack('i i c', data, data1, data2)`
- Thermal victims radius decreased
- Tiles are now much smaller
- Moved starting tile to within the maze

### Removed
- Start 'bay' on outside of maze removed
- Robots not in generated world file

### Fixed
- Attempting to relocate with no robot no longer causes a crash

[Unreleased]: https://github.com/Shadow149/RescueMaze  
[Release 4]:  
[Release 3]: https://github.com/Shadow149/RescueMaze/releases/tag/v1.1.1  
[Release 2]: https://github.com/Shadow149/RescueMaze/releases/tag/v1.1  
[Release 1]: https://github.com/Shadow149/RescueMaze/releases/tag/v1.0  
