@class NSString, NSMutableSet, NSDate, NSMenuItem;

@interface GLUTApplication : NSApplication <NSApplicationDelegate> {
    NSMenuItem *_aboutMenuItem;
    NSMenuItem *_hideMenuItem;
    NSMenuItem *_quitMenuItem;
    NSDate *_distantFuture;
    NSDate *_distantPast;
    NSMutableSet *_viewStorage;
    BOOL _isPackaged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)run;
- (void)applicationWillFinishLaunching:(id)a0;
- (void)applicationDidHide:(id)a0;
- (void)applicationWillHide:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)runOnce;
- (void)_readMouseConfiguration;
- (void)_runMainLoopUntilDate:(id)a0 autoreleasePool:(id *)a1;

@end
