@protocol PXLivePhotoBadgeViewDelegate;

@interface PXLivePhotoBadgeView : UXView {
    struct { BOOL wantsPlayback; } _delegateRespondsTo;
    struct CGSize { double width; double height; } _size;
    long long _trackingRectTag;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackedRect;
@property (weak, nonatomic) id<PXLivePhotoBadgeViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setUpContent;
- (void)setWantsPlayback:(BOOL)a0;

@end
