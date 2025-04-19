@class NSColor, NSImage;

@interface AUMeterView : AUNSFlippedView {
    double mValue;
    int mLastDisplayValue;
    int mCurrentDisplayValue;
    NSColor *mForegroundColor;
    NSColor *mBackgroundColor;
    int mLastWidth;
    double mCurrentMeterBarWidth;
    NSImage *mMeterBarGraphic[3];
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setFloatValue:(float)a0;
- (void)viewDidMoveToWindow;
- (void)getNewGraphicsOfSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadMeterBarGraphicsIfNeeded;
- (void)privNotificationControlTintUpdated:(id)a0;
- (void)privNotificationWindowActivationStateUpdated:(id)a0;

@end
