@class NSArray;

@interface CAWindowServerDisplayManager : NSObject {
    NSArray *_displays;
    struct DisplayManager { struct __AppleDisplayManager *x0; } *_apple_display_manager;
}

- (void)dealloc;
- (id)availableDisplayWallGroups;
- (BOOL)disableDisplayWallConfigurationWithDisplay:(id)a0;
- (BOOL)enableDisplayWallWithConfiguration:(id)a0;
- (BOOL)isDisplayWallWithDisplayEnabled:(id)a0;
- (BOOL)validateDisplayWallConfiguration:(id)a0;
- (id)_initWithDisplays:(id)a0;

@end
