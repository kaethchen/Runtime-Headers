@class NSView, NSPanel, XSDisablingTextField, NSTimer, ODCAddServerSheetController, ODCServersView, NSImageView, ODSession, NSButton;

@interface ODCSummaryViewController : ODCViewControllerBase {
    NSView *_view;
    XSDisablingTextField *_serverNameLabel;
    NSImageView *_serverStatusImage;
    NSButton *_editButton;
    NSButton *_joinButton;
    NSPanel *_serversSheet;
    ODCServersView *_serversSheetServersView;
    NSButton *_serversSheetDoneBtn;
    NSButton *_serversSheetDirectoryUtilBtn;
    ODSession *_odSession;
    NSTimer *_updateTimer;
    void *_odSearchNodeTrigger;
    ODCAddServerSheetController *_addServerSheetController;
    BOOL _boundToAD;
}

- (void)dealloc;
- (void)awakeFromNib;
- (void)startUpdating;
- (void)stopUpdating;
- (void)buttonHit:(id)a0;
- (void)lookForServers:(BOOL)a0;
- (void)authSucceededNotification:(id)a0;
- (void)foundServers:(id)a0;
- (void)lookForServers;
- (void)lookForServersIfViewVisible;
- (void)sheetControllerDone:(id)a0;
- (void)threadedLookForServers;
- (void)updateLocked;

@end
