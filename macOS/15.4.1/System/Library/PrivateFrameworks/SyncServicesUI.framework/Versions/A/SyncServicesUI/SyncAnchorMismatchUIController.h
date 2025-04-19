@class NSTextField, SyncUIController, NSPanel, NSPopUpButton, NSButton;

@interface SyncAnchorMismatchUIController : NSObject {
    SyncUIController *_syncUIController;
    NSPanel *_syncAnchorMismatchPanel;
    NSTextField *syncAnchorMismatchMajorTextField;
    NSTextField *syncAnchorMismatchMinorTextField;
    NSPopUpButton *syncAnchorMismatchPopup;
    NSButton *syncAnchorMismatchOKButton;
    int syncMode;
}

- (bycopy int)runSyncAnchorMismatchDialog:(bycopy id)a0 forClient:(bycopy id)a1;
- (id)initWithSyncUIController:(id)a0;
- (void)showSyncAnchorMismatchHelp:(id)a0;
- (void)syncAnchorMismatchClosePanel:(id)a0;

@end
