@interface SwiftUI.TestingAppDelegate : NSResponder <NSApplicationDelegate, NSApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ mainWindow;
    void /* unknown type, empty encoding */ comparisonWindow;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ testHost;
    void /* unknown type, empty encoding */ comparisonHost;
    void /* unknown type, empty encoding */ didLaunch;
    void /* unknown type, empty encoding */ isFinishedLaunching;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)applicationExplicitlyMarksAppLaunchComplete:(id)a0;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;

@end
