@class NSString, MKBlurBackingLayer, MKCompassLayer;

@interface MKCompassView : NSView <MKCompassView> {
    MKBlurBackingLayer *_blurLayer;
    MKCompassLayer *_displayLayer;
    MKCompassLayer *_maskLayer;
    long long _outerRingTooltipTag;
    long long _innerDiscTooltipTag;
    long long _innerDiscTrackingRectTag;
}

@property (class, readonly) double diameter;

@property (nonatomic) double mapHeading;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_initMetrics;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)_commonInit;
- (BOOL)accessibilityIsIgnored;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (BOOL)wantsUpdateLayer;
- (void)updateHighlight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_innerDiscRect;
- (BOOL)isPointInCompass:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInInnerPortion:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isPointInOuterRing:(struct CGPoint { double x0; double x1; })a0;
- (void)resetCompassFlatWithMapPitch:(double)a0 pitchEnabled:(BOOL)a1 mapType:(int)a2 changeButtonTextWithPitch:(BOOL)a3;
- (void)setCompassViewSize:(long long)a0;
- (void)setCompassViewSize:(long long)a0 style:(long long)a1;
- (void)updateAccessibilityDescriptionWithAngle:(double)a0;
- (void)updateBlurVisibility;
- (void)updateTooltip;
- (void)updateTooltipForInnerDiscHovered:(BOOL)a0;

@end
