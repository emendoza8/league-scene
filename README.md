# league-scene!
CIS376 League Scene

**Animated Scene**

**1. Overview:**
The short animation is designed to showcase a simple animated scene with various objects interacting with each other. The scene includes a player character, enemy character, background, referee cat, and a thief character. These objects move and interact within the scene to create a visually appealing animation. See gif for example:
    
    ![Animation](../assets/animationGif.gif)

**2. Dependencies/Inclusions:**
- **SDL2:** Used for graphics rendering, window management, and event handling.
- **Lua:** Included for scripting. 
- **MathFu:** Used for mathematical operations.

**3. Class Structure:**
- **Drawable:** Base class for all drawable objects within the scene. Defines methods for rendering objects onto the screen.
- **Updateable:** Base class for all objects that require updating their state over time. Defines methods for updating object properties based on elapsed time.


