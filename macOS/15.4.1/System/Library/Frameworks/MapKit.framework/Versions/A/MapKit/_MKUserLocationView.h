@class _MKUserLocationViewImageProvider, NSString, NSImage, NSView, _MKKVOProxy, NSColor;

@interface _MKUserLocationView : _MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate> {
    double _externalMaxAccuracyRadius;
    BOOL _radiusBasedAccuracyOpacity;
    BOOL _hasExplicitCalloutStyle;
    _MKUserLocationViewImageProvider *_imageProvider;
    NSImage *_balloonImage;
    NSColor *_balloonImageTintColor;
    _MKKVOProxy *_kvoProxy;
}

@property (nonatomic, getter=_showingPreciseAuthorizedLocation, setter=_setShowingPreciseAuthorizedLocation:) BOOL showingPreciseAuthorizedLocation;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonTintColor) NSColor *balloonTintColor;
@property (readonly, nonatomic, getter=_balloonStrokeColor) NSColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonImage) NSImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonContentView) NSView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) NSColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonImageTintColor) NSColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAnnotation:(id)a0;
- (void)setMaxRadiusToShowAccuracyRing:(double)a0;
- (BOOL)_allowedToShowCallout;
- (void)_dismissCallout:(BOOL)a0;
- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)a0;
- (void)_mkObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setBalloonImage:(id)a0;
- (void)_setBalloonImageTintColor:(id)a0;
- (void)_setCalloutStyle:(long long)a0;
- (void)_showCallout:(BOOL)a0;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_updateCalloutOffset;
- (void)_updateCalloutStyle;
- (void)_updateLegacyConfiguration;
- (void)_updateMaxRadiusToShowAccuracyRing;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)setRightCalloutAccessoryView:(id)a0;
- (BOOL)shouldShowCallout;

@end
