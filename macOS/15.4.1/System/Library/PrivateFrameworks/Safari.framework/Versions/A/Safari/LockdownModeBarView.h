@class NSTextField;

@interface LockdownModeBarView : NSView {
    NSTextField *_lockdownModeStatusLabel;
}

@property (nonatomic) long long lockdownModeStatus;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLockdownStatusLabel;

@end
