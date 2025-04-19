@class NSView, NSString, _MKMarkerAnnotationBaseImageView, MKImageView, CALayer, NSColor, NSImage, MKWalletMerchantStylingInfo, GEOFeatureStyleAttributes, _MKUILabel;

@interface MKMarkerAnnotationView : MKAnnotationView {
    CALayer *_shadow;
    CALayer *_selectedMarkerLayer;
    _MKMarkerAnnotationBaseImageView *_markerView;
    _MKMarkerAnnotationBaseImageView *_selectedDotView;
    _MKMarkerAnnotationBaseImageView *_selectedMarkerView;
    MKImageView *_glyphImageView;
    _MKUILabel *_glyphLabel;
    MKImageView *_selectedGlyphImageView;
    _MKUILabel *_selectedGlyphLabel;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
}

@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;
@property (copy, nonatomic) NSColor *markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (retain, nonatomic) NSView *selectedContentView;
@property (retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic) long long titleVisibility;
@property (nonatomic) long long subtitleVisibility;
@property (copy, nonatomic) NSColor *markerTintColor;
@property (copy, nonatomic) NSColor *glyphTintColor;
@property (copy, nonatomic) NSString *glyphText;
@property (copy, nonatomic) NSImage *glyphImage;
@property (copy, nonatomic) NSImage *selectedGlyphImage;
@property (nonatomic) BOOL animatesWhenAdded;

+ (float)_defaultDisplayPriority;
+ (Class)_mapkitLeafClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleVisibility:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (struct CGPoint { double x0; double x1; })_anchorPointForCalloutAnchorPosition:(long long)a0;
- (int)_blendMode;
- (void)_configureAnimated:(BOOL)a0 fromState:(long long)a1 toState:(long long)a2;
- (void)_configureViewsForState:(long long)a0 usesCallout:(BOOL)a1 animated:(BOOL)a2;
- (long long)_currentMarkerState;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_didDragWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)_effectiveGlyphImageForState:(long long)a0 isSystemProvided:(BOOL *)a1;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphTintColorForState:(long long)a0;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)a0;
- (double)_effectiveMarkerStrokeWidthForState:(long long)a0;
- (id)_effectiveMarkerTintColorForState:(long long)a0;
- (double)_effectiveShadowAlphaForState:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSelectionAdjustment;
- (BOOL)_hasDataRequiringCallout;
- (id)_layersToAnimateForViews:(id)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct CGSize { double x0; double x1; } x6; })_metricsForState:(long long)a0;
- (id)_resolvedColorForAppearance;
- (void)_setShadowAlpha:(double)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 duration:(double)a2;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)a0;
- (BOOL)_shouldDeselectWhenDragged;
- (BOOL)_shouldRenderGradient;
- (long long)_stateForIsSelected:(BOOL)a0;
- (void)_swayAnimation;
- (void)_unhideForDisplay;
- (void)_updateContentForState:(long long)a0;
- (void)_updateContentForState:(long long)a0 forceUpdate:(BOOL)a1;
- (void)_updateSelectedMarkerLayer;
- (void)_updateStyle;
- (BOOL)canShowCallout;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)isProvidingCustomFeature;
- (void)prepareForDisplay;
- (void)prepareForSnapshotting;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setSubtitleVisibility:(long long)a0;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
