@interface RemindersUICore.TTRMFlippedClipView : NSClipView

@property (nonatomic, readonly) BOOL flipped;
@property (nonatomic, readonly) BOOL opaque;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)isOpaque;

@end
