@interface SwiftUI.ListCoreClipView : NSClipView

@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (nonatomic) BOOL flipped;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;

@end
