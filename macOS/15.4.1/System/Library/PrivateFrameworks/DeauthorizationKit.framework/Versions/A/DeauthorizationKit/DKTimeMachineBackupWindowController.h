@class NSImageView, NSTextField, NSButton, NSWindow;

@interface DKTimeMachineBackupWindowController : NSWindowController

@property (weak) NSImageView *imageView;
@property (weak) NSTextField *lastBackupTextField;
@property (weak) NSButton *continueButton;
@property struct OpaqueCSBackupServerProxyRef { } *statusProxy;
@property struct __CFMachPort { } *notifyPort;
@property struct __CFRunLoopSource { } *notifySource;
@property int notifyToken;
@property (retain) NSWindow *parentWindow;

- (void).cxx_destruct;
- (void)updateStatus;
- (void)windowDidLoad;
- (void)setupView;
- (BOOL)_sendAsyncBackupdMessage:(id)a0;
- (void)backUpNowToDestination:(id)a0 forceConsistencyScan:(BOOL)a1;
- (void)continueClicked:(id)a0;
- (void)initiateBackup;
- (id)latestBackupDate;
- (void)registerForStateChangeNotifications;
- (id)timeMachineBackupStatus;
- (id)timeMachineDestinations;

@end
