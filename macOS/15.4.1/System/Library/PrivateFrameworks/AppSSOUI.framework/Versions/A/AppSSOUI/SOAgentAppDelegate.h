@class NSString;

@interface SOAgentAppDelegate : NSObject <NSApplicationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (void)applicationWillTerminate:(id)a0;

@end
