@class NSTimer, NSString, NSView, NSArrayController, ODCAddServerSheetController, ODCRemoveODServerSheetController, ODCUnbindFromADSheetController, NSButton, ODCEmptyMessageTableView, ODSession;

@interface ODCServersViewController : ODCViewControllerBase {
    NSView *_view;
    ODCEmptyMessageTableView *_tableView;
    NSArrayController *_dirServersAC;
    NSButton *_addButton;
    NSButton *_removeButton;
    ODSession *_odSession;
    NSTimer *_updateTimer;
    void *_odSearchNodeTrigger;
    void *_odNodeTrigger;
    BOOL _tableEmptyMsgHasBeenSet;
    ODCAddServerSheetController *_addServerSheetController;
    ODCRemoveODServerSheetController *_removeODServerSheetController;
    ODCUnbindFromADSheetController *_unbindFromADSheetController;
    BOOL _boundToAD;
}

@property (retain) NSString *remoteServerName;
@property (retain) NSString *remoteAdminName;
@property (retain) NSString *remotePassword;

- (void)dealloc;
- (void)awakeFromNib;
- (void)startUpdating;
- (void)stopUpdating;
- (void)buttonHit:(id)a0;
- (void)lookForServers:(BOOL)a0;
- (void)closeSheetAndPrepareForRelease;
- (void)foundServers:(id)a0;
- (void)lookForServers;
- (void)lookForServersIfViewVisible;
- (void)sheetControllerDone:(id)a0;
- (void)tableViewDeleteKeyHit:(id)a0;
- (void)threadedLookForServers;

@end
