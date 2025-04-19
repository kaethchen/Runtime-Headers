@class NSColor, MKImageView;
@protocol _MKPinAnnotationViewDelegate;

@interface MKPinAnnotationView : MKAnnotationView {
    MKImageView *_shadowView;
    NSColor *_pinTintColor;
    int _state;
    BOOL _animatesDrop;
}

@property (weak, nonatomic, setter=_setDelegate:) id<_MKPinAnnotationViewDelegate> _delegate;
@property (retain) NSColor *pinTintColor;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;

+ (id)_reuseIdentifier;
+ (Class)layerClass;
+ (id)_bounceAnimation;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (id)_dropBounceAnimation;
+ (id)_imageCache;
+ (id)_imageForLayer:(long long)a0 state:(long long)a1 mapType:(unsigned long long)a2;
+ (id)_imageForState:(long long)a0 mapType:(unsigned long long)a1 pinColor:(id)a2 effectiveAppearance:(id)a3;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (Class)_mapkitLeafClass;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })a0;
+ (id)_pinsWithMapType:(unsigned long long)a0 pinColor:(id)a1 effectiveAppearance:(id)a2;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;
+ (id)_shadowImage;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (id)redPinColor;

- (id)description;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_highlightedImage;
- (id)_image;
- (int)_state;
- (id)accessibilityAttributeValue:(id)a0;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)isHighlighted;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLayer;
- (id)_bounceAnimation:(BOOL)a0 withDelay:(double)a1 addToLayer:(BOOL)a2;
- (void)_cleanupAfterPinDropAnimation;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_didUpdatePosition;
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)a0 animated:(BOOL)a1;
- (void)_dropFromDistance:(double)a0 maxDistance:(double)a1 withDelay:(double)a2;
- (id)_floatingImage;
- (void)_invalidateImage;
- (void)_jump;
- (void)_liftDidEnd:(id)a0;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)a0;
- (void)_liftForDraggingAnimated:(BOOL)a0;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (id)_pins;
- (void)_removeAllAnimations;
- (void)_setMapType:(unsigned long long)a0;
- (void)_setRotationRadians:(double)a0 withAnimation:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (void)_stopDrop;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })a0 alignToPixels:(BOOL)a1;
- (void)_updateShadowLayer;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;

@end
