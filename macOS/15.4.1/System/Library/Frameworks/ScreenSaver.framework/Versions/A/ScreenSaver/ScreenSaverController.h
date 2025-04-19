@interface ScreenSaverController : NSObject <ScreenSaverControl>

@property (class, readonly) ScreenSaverController *controller;

@property BOOL screenSaverCanRun;
@property (readonly) BOOL screenSaverIsRunning;
@property (readonly) double screenSaverTimeRemaining;
@property (readonly) BOOL screenSaverIsRunningInBackground;

- (void)screenSaverStartNowWithOptions:(id)a0;
- (void)restartForUser:(id)a0;
- (void)screenSaverDidFadeInBackground:(BOOL)a0 psnHi:(unsigned int)a1 psnLow:(unsigned int)a2;
- (void)screenSaverStartNow;
- (void)screenSaverStopNow;
- (void)screenSaverStopNowWithOptions:(id)a0;

@end
