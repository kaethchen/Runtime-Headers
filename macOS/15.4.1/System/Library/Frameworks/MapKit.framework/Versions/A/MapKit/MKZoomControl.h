@class NSImageView, NSString, MKMapView, MKModernControlAppearanceHelper, NSButton;

@interface MKZoomControl : NSView <MKModernControlAppearanceView, NSViewLayerContentScaleDelegate> {
    MKModernControlAppearanceHelper *_appearanceHelper;
    int _zoomState;
    NSImageView *_minusImageView;
    NSImageView *_plusImageView;
    NSButton *_minusButton;
    NSButton *_plusButton;
    BOOL _userInteractionEnabled;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL hovering;
@property (weak, nonatomic) MKMapView *mapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zoomControlWithMapView:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFlipped;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateAppearance;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)initWithMapView:(id)a0;
- (void)zoomControlMinusAction:(id)a0;
- (void)zoomControlPlusAction:(id)a0;

@end
