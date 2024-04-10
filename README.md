# league-scene!
CIS376 W24 League Scene

**Animated Scene**

**1. Overview:**
This short animation is designed to demonstrate a simple animated scene with five game objects interacting with each other. The scene includes a player character, enemy character, background, referee cat character, and a thief character. Some of these objects move and interact within the scene to create a short animation. This project uses the base LEAGUE engine provided by MrW at GVSU. See gif for example:
    
![Animation](assets/animationGif.gif)

**1. Dependencies/Inclusions:**
- **SDL2:** Used for graphics rendering, window management, and event handling.
- **Lua:** Included for scripting. 
- **MathFu:** Included for mathematical operations.

**1. Class Structure:**
- **Drawable:** Base class for all drawable objects within the scene. Defines methods for rendering objects onto the screen.
- **Updateable:** Base class for all objects that require updating their state over time. Defines methods for updating object properties based on elapsed time.


