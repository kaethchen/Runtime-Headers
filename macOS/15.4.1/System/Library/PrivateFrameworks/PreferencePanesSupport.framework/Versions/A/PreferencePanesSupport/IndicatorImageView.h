@class NSTextField;

@interface IndicatorImageView : NSImageView {
    struct CGPoint { double x; double y; } mSavedOrigin;
}

@property (weak) NSTextField *parent;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSavedFrameOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
