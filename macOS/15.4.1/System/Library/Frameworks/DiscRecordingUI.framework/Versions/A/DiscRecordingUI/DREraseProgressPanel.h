@class NSImageView, NSTextField, NSSound, NSProgressIndicator, NSString, DRErase;

@interface DREraseProgressPanel : NSPanel {
    NSTextField *_taskDescription;
    NSProgressIndicator *_progress;
    NSImageView *_icon;
    id _owner;
    DRErase *_eraseObject;
    NSSound *_successSound;
    NSSound *_failureSound;
    NSString *_description;
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
- (void)setDescription:(id)a0;
- (void)_DRStatusStateDone:(id)a0;
- (void)_DRStatusStateErasing:(id)a0;
- (void)_DRStatusStateFailed:(id)a0;
- (void)_DRStatusStatePreparing:(id)a0;
- (void)_cleanupProgressAndNotify;
- (void)_commonProgressStartForErase:(id)a0;
- (void)_delayedPanelClose:(id)a0;
- (void)_eraseNotification:(id)a0;
- (void)_errorDismissed:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)beginProgressPanelForErase:(id)a0;
- (void)beginProgressSheetForErase:(id)a0 modalForWindow:(id)a1;

@end
