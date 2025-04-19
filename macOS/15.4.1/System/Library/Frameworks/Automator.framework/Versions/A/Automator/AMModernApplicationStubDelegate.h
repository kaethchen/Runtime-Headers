@class NSString, AMApplicationStubController;

@interface AMModernApplicationStubDelegate : NSObject <NSApplicationDelegate>

@property (retain) AMApplicationStubController *applicationStubController;
@property BOOL didRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)application:(id)a0 openFile:(id)a1;
- (void)application:(id)a0 openFiles:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;

@end
