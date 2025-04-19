@class NSString, MKSelectionAccessoryView, CAShapeLayer, NSLayoutConstraint, NSColor;

@interface MKCalloutSelectionAccessoryView : MKSelectionAccessoryView <MKPlaceCardContentSizeDelegate> {
    MKSelectionAccessoryView *_wrappedView;
    CAShapeLayer *_shadowLayer;
    NSLayoutConstraint *_wrappedViewWidthConstraint;
    NSLayoutConstraint *_wrappedViewHeightConstraint;
    double _pointerUnitLocation;
    NSColor *_fillColor;
    NSColor *_borderColor;
}

@property (readonly, nonatomic) long long calloutStyle;
@property (readonly, nonatomic) long long pointerEdge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pointerHeight;
+ (double)pointerMargin;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)layout;
- (id)makeBackingLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)displayMapItem:(id)a0;
- (void)_updateLayerColors;
- (void)_updateShape;
- (void)displayError;
- (void)displayLoading;
- (id)initWithSelectionAccessoryView:(id)a0 style:(long long)a1 pointerEdge:(long long)a2 pointerUnitLocation:(double)a3;
- (void)placeCardPreferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;

@end
