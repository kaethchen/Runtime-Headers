@class NSString;

@interface ScreenSaverEngine : NSResponder <NSWindowDelegate, NSFileManagerDelegate, NSApplicationDelegate>

@property (readonly) int retCode;
@property (readonly, getter=isRunning) BOOL running;
@property BOOL runFromPref;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)setDelegate:(id)a0;
- (BOOL)running;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)_screenSaverDidStop:(id)a0;
- (void)hidEventReceived;
- (void)pauseScreenSaver;
- (void)readjustDisplays;
- (void)reallyStopScreenSaver:(id)a0;
- (void)startScreenSaver:(BOOL)a0;
- (void)stopScreenSaver:(BOOL)a0;
- (void)unpauseScreenSaver;

@end
