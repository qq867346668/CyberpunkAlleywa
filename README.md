# CyberpunkAlleywa
This is a experimental project when learning Unreal Engine.

Implemented Features:

1. Real-time day-night light transition.
2. Rainy day materials, including effects such as Rain Drips, Rain Drops, Rain Bubbles, and Rain Ripples. All these effects are encapsulated as Material Functions for easy integration with other materials.
3. Rain effect implemented with Niagara, including the effect of raindrops in the air and the splash effect when raindrops hit the ground.
4. Cable Actor used to simulate the effect of wires blowing in the wind.
5. Volumetric Cloud Rendering disabled via code when recapturing skylight. Skylight recapture is used instead of real-time skylight capture when real-time day-night transition is not enabled to improve rendering frame rate.