@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {
    BOOL _selected;
}

@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isSelected;
- (void)setAnnotation:(id)a0;
- (id)_innerImageMask;
- (double)_accuracyRingAlpha;
- (BOOL)_allowedToShowCallout;
- (BOOL)_allowsAccuracyRing;
- (BOOL)_allowsPulse;
- (void)_animateGemPop;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_annotationTrackingInsets;
- (BOOL)_canShowHeadingIndicator;
- (double)_heading;
- (BOOL)_isStale;
- (id)_lastLocation;
- (void)_locationManagerFailedToUpdateLocation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mapkit_visibleRect;
- (double)_maxRadiusToShowAccuracyRing;
- (double)_puckAlpha;
- (BOOL)_rotateInnerImageToMatchCourse;
- (float)_selectionPriority;
- (void)_setAccuracyRingAlpha:(double)a0;
- (void)_setAllowsAccuracyRing:(BOOL)a0;
- (void)_setAllowsPulse:(BOOL)a0;
- (void)_setCanShowHeadingIndicator:(BOOL)a0;
- (void)_setHeading:(double)a0;
- (void)_setInnerImageMask:(id)a0;
- (void)_setMapDisplayStyle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; BOOL x5; })a0;
- (void)_setMapPitchRadians:(double)a0;
- (void)_setMapRotationRadians:(double)a0;
- (void)_setMapType:(unsigned long long)a0;
- (void)_setMaxRadiusToShowAccuracyRing:(double)a0;
- (void)_setPuckAlpha:(double)a0;
- (void)_setPuckScale:(double)a0;
- (void)_setRotateInnerImageToMatchCourse:(BOOL)a0;
- (void)_setSelectionPriority:(float)a0;
- (void)_setShouldDisplayHeading:(BOOL)a0;
- (void)_setShouldInnerPulse:(BOOL)a0;
- (void)_setShouldShowOuterRing:(BOOL)a0;
- (BOOL)_shouldDisplayHeading;
- (BOOL)_shouldInnerPulse;
- (BOOL)_shouldShowOuterRing;
- (void)_updateFromMap;
- (void)_updateStateFromLocation:(id)a0 duration:(double)a1;
- (struct CGPoint { double x0; double x1; })calloutOffset;
- (BOOL)canShowCallout;
- (struct CGPoint { double x0; double x1; })centerOffset;
- (id)detailCalloutAccessoryView;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)isDraggable;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { double x0; double x1; })leftCalloutOffset;
- (void)prepareForDisplay;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x0; double x1; })rightCalloutOffset;
- (void)setCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setCanShowCallout:(BOOL)a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRightCalloutAccessoryView:(id)a0;
- (void)setRightCalloutOffset:(struct CGPoint { double x0; double x1; })a0;

@end
