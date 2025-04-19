@class NSLayoutConstraint;

@interface _MKStackingPlaceholderView : NSView {
    NSLayoutConstraint *_contentHeightConstraint;
}

@property (nonatomic) double contentHeight;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (id)initWithHeight:(double)a0;

@end
