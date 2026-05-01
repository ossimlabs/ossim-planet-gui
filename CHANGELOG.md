# Changelog

All notable changes to `ossim-planet-gui` are documented here.

## [2026-05-01]

> **TL;DR:** The legacy planet GUI now builds in the Qt5 workspace again and
> links cleanly against the in-tree planet target.

### Changed
- Require Qt5 Core, Widgets, and OpenGL packages during CMake configure.
- Prefer the in-tree `ossim-planet` target when linking the GUI library.
- Link the application bundle against the Qt5 imported targets.
- Update the planet GUI version header to use `OSSIM_PATCH_VERSION_NUMBER`.
