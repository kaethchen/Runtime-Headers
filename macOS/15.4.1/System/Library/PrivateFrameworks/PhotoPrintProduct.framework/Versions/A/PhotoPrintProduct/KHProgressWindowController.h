@class NSTextField, NSString, NSProgress, NSProgressIndicator, NSButton, NSMutableArray;

@interface KHProgressWindowController : NSWindowController <NSWindowDelegate> {
    BOOL _driveIndeterminate;
    BOOL _showCancelButton;
    NSMutableArray *_constraints;
}

@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSTextField *statusLabel;
@property (weak) NSButton *cancelButton;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateConstraints;
- (void)_updateLabel;
- (void)windowDidLoad;
- (BOOL)windowShouldZoom:(id)a0 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })windowWillResize:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateState;
- (void)presentInWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cancelUsingProgressHandler:(id)a0;
- (void)_executeCancelBlock:(id)a0;
- (void)_updateProgressIndicatorValue:(double)a0;
- (void)_updateProgressInterface;
- (void)dismissWithCode:(long long)a0;
- (void)driveControllerWithIndeterminateProgress:(id)a0 showCancelButton:(BOOL)a1;
- (void)driveControllerWithProgress:(id)a0;

@end
