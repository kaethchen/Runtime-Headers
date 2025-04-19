@class NSVisualEffectView;
@protocol PHLivePhotoBadgeDelegate;

@interface PHLivePhotoBadge : NSView {
    struct CGSize { double width; double height; } _size;
    NSVisualEffectView *_backgroundView;
    long long _trackingRectTag;
}

@property (weak, nonatomic) id<PHLivePhotoBadgeDelegate> delegate;

+ (id)_livePhotoOverlayBadgeLabelTextAttributesOfSize:(double)a0;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;
- (void)_setHasTrackingArea:(BOOL)a0;

@end
