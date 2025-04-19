@interface OFNSView : OFViewProxy {
    BOOL _opaque;
}

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL userInteractionEnabled;

- (void)dealloc;
- (void)layout;
- (void)beginGestureWithEvent:(id)a0;
- (void)commonInit;
- (void)endGestureWithEvent:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)layoutIfNeeded;
- (void)setOpaque:(BOOL)a0;
- (void)updateLayer;
- (BOOL)wantsDefaultClipping;
- (BOOL)wantsUpdateLayer;
- (BOOL)opaque;

@end
