@class NSNumber, NSTimer, NSTextField;

@interface AppleNetworkMenuHeaderView : NSView {
    NSTextField *o_titleField;
    NSTextField *o_timeField;
    NSNumber *mConnectionStartTime;
    double mSleepStartTime;
    long long mSleepTimeAdditionalSeconds;
    NSTimer *mConnectedTimer;
    NSTimer *mClickFlashTimer;
    BOOL mHasClicked;
    BOOL mIsHighlighted;
    BOOL mShouldShowTimer;
}

- (void)setEnabled:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)setWidth:(double)a0;
- (id)title;
- (void)setTime:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)viewWillMoveToWindow:(id)a0;
- (long long)elapsedTime;
- (void)setShouldShowTimer:(BOOL)a0;
- (id)timeString;
- (void)updateTime;
- (void)setConnectionStartTime:(id)a0;
- (double)desiredWidth;
- (void)drawHighlighted:(BOOL)a0;
- (void)startConnectedTimer;
- (void)stopConnectedTimer;

@end
