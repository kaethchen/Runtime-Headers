@class NSImageView, NSTextField, NSString, NSProgressIndicator, DRBurn, NSButton, NSSound;

@interface DRBurnProgressPanel : NSPanel {
    NSTextField *_status;
    NSTextField *_taskDescription;
    NSProgressIndicator *_progress;
    NSImageView *_icon;
    NSButton *_stopButton;
    id _owner;
    DRBurn *_burnObject;
    NSSound *_successSound;
    NSSound *_failureSound;
    NSString *_description;
    BOOL _verbose;
    NSString *_curState;
}

+ (void)initialize;
+ (id)progressPanel;

- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)a0;
- (void)_display;
- (BOOL)canBecomeMainWindow;
- (void)setIcon:(id)a0;
- (void)setProgress:(id)a0;
- (void)setTaskDescription:(id)a0;
- (void)setStatus:(id)a0;
- (void)setDescription:(id)a0;
- (void)setStop:(id)a0;
- (void)_DRStatusStateTrackOpen:(id)a0;
- (void)_DRStatusStateTrackWrite:(id)a0;
- (void)_burnNotification:(id)a0;
- (void)_commonProgressStartForBurn:(id)a0 layout:(id)a1;
- (void)_DRStatusStateDone:(id)a0;
- (void)_DRStatusStateFailed:(id)a0;
- (void)_DRStatusStateFinishing:(id)a0;
- (void)_DRStatusStatePreparing:(id)a0;
- (void)_DRStatusStateSessionClose:(id)a0;
- (void)_DRStatusStateSessionOpen:(id)a0;
- (void)_DRStatusStateTrackClose:(id)a0;
- (void)_DRStatusStateVerifying:(id)a0;
- (void)_cleanupProgressAndNotify;
- (void)_delayedPanelClose:(id)a0;
- (void)_errorDismissed:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)beginProgressPanelForBurn:(id)a0 layout:(id)a1;
- (void)beginProgressSheetForBurn:(id)a0 layout:(id)a1 modalForWindow:(id)a2;
- (void)setVerboseProgressStatus:(BOOL)a0;
- (void)stopBurn:(id)a0;
- (BOOL)verboseProgressStatus;

@end
