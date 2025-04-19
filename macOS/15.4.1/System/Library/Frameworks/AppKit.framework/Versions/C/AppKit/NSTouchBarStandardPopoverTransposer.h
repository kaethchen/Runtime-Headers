@class NSView;

@interface NSTouchBarStandardPopoverTransposer : NSTouchBarPressAndHoldTransposer {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _srcFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dstFrame;
    NSView *_contentView;
    NSView *_hitView;
    long long _oldHitViewInsetMitigation;
    long long _oldHitViewRestingMitigation;
}

- (void)dealloc;
- (void)transposeTouch:(id)a0;
- (id)initWithSourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 destinationContentView:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGPoint { double x0; double x1; })tranposePoint:(struct CGPoint { double x0; double x1; })a0;
- (id)transposedTouchFromTouch:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 prevLocation:(struct CGPoint { double x0; double x1; })a2 phase:(unsigned long long)a3 view:(id)a4;

@end
