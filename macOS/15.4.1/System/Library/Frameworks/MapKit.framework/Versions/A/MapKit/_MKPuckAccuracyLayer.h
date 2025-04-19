@class CAGradientLayer, NSArray, NSAppearance, CALayer, NSColor;

@interface _MKPuckAccuracyLayer : CALayer {
    BOOL _externallyHidden;
    BOOL _internallyHidden;
    BOOL _shouldShowAnimationsIfAvailable;
    NSColor *_fullOpacityFillColor;
    double _baseOpacity;
    double _additionalOpacityMultiplier;
    NSColor *_fullOpacityStrokeColor;
    double _baseStrokeOpacity;
    double _additionalStrokeOpacityMultiplier;
    BOOL _useDarkAppearance;
    CALayer *_ring;
    CAGradientLayer *_faux3DHighlight;
    CALayer *_faux3DHighlightMask;
    NSArray *_faux3DHighlightMaskRings;
    CALayer *_faux3DShadow;
}

@property (nonatomic, getter=isFaux3DEnabled) BOOL faux3DEnabled;
@property (nonatomic) double minimumRadius;
@property (nonatomic) unsigned long long mapType;
@property (retain, nonatomic) NSColor *tintColor;
@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, nonatomic) double currentAccuracy;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } significantBounds;
@property (readonly, nonatomic) double presentationFillOpacity;
@property (retain, nonatomic) NSAppearance *effectiveAppearance;
@property (nonatomic) double mapPitchRadians;
@property (nonatomic) double mapCameraDistance;

- (id)init;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)_createFaux3DRings;
- (void)_updateColors;
- (void)_updateFaux3DRingsIfNecessary;
- (void)setAccuracy:(double)a0 duration:(double)a1;
- (void)setFillOpacity:(double)a0 duration:(double)a1;
- (void)setStrokeOpacity:(double)a0 duration:(double)a1;
- (void)startAnimationsIfNecessary;
- (void)stopAnimations;
- (void)updateLegacyConfiguration;

@end
