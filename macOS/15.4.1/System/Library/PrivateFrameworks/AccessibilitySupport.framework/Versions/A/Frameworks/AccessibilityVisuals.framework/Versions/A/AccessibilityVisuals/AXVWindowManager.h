@interface AXVWindowManager : NSObject

@property (nonatomic, setter=_setLowestLevelWindowID:) long long _lowestLevelWindowID;
@property (nonatomic, setter=_setLowestWindowLevel:) long long _lowestWindowLevel;

+ (void)_newWindowCreated:(id)a0;
+ (unsigned long long)_sharedSpaceID;
+ (long long)lowestLevelWindowIDForScreenShotExclusion;
+ (void)setShowsWindowsAboveLoginWindow:(BOOL)a0;
+ (id)sharedBrailleWindow;
+ (id)sharedCaptionWindow;
+ (id)sharedMenuWindow;
+ (id)sharedOverlayWindowForAllScreens;
+ (id)sharedRotorWindow;
+ (id)sharedSearchWindow;
+ (id)sharedSpeechMenuWindow;
+ (id)sharedWindowManager;

- (id)init;
- (void)_updateLowestWindowLevelWithWindow:(id)a0;

@end
