@class NSColor, NSBox;

@interface MKViewWithHairline : NSView {
    NSBox *_bottomHairline;
    NSBox *_topHairline;
}

@property (retain, nonatomic) NSColor *hairlineColor;
@property (nonatomic) double leftHairlineInset;
@property (nonatomic) double rightHairlineInset;
@property (nonatomic, getter=isTopHairlineHidden) BOOL topHairlineHidden;
@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
