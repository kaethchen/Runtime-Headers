@class MKPointOfInterestFilter, NSString, _MKGradientView, MKLookAroundView, MKLookAroundScene, NSClickGestureRecognizer;
@protocol NSObject, MKLookAroundViewControllerDelegate;

@interface MKLookAroundViewController : NSViewController <MKLookAroundViewDelegate, NSSecureCoding, NSCoding> {
    _MKGradientView *_gradientView;
    MKLookAroundView *_lookAroundView;
    NSClickGestureRecognizer *_selectGestureRecognizer;
    id<NSObject> _didBecomeFullyDrawnObserver;
    BOOL _initialScene;
    BOOL _needsLookAroundViewUpdate;
    BOOL _needsSceneUpdate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL didBecomeFullyDrawn;
@property (nonatomic, getter=_isFullScreenCover, setter=_setFullScreenCover:) BOOL fullScreenCover;
@property (weak, nonatomic) id<MKLookAroundViewControllerDelegate> delegate;
@property (copy, nonatomic) MKLookAroundScene *scene;
@property (nonatomic, getter=isNavigationEnabled) BOOL navigationEnabled;
@property (nonatomic) BOOL showsRoadLabels;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) long long badgePosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_commonInit;
- (id)_contentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultFrame;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)_didSelectView:(id)a0;
- (void)lookAroundViewWillChangeRegion:(id)a0;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (BOOL)_shouldRestrictLookAroundViewOptionsForPreview;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateCloseButtonIfNeeded;
- (void)_updateGradientIfNeeded;
- (void)_updateLookAroundViewIfNeeded;
- (void)_updateSceneIfNeeded;
- (void)_updateStackViewIfNeeded;
- (id)initWithScene:(id)a0;
- (void)lookAroundView:(id)a0 didChangeCameraFrame:(id)a1;
- (void)lookAroundView:(id)a0 didChangeLocationInfo:(id)a1;
- (void)lookAroundView:(id)a0 didDeselectLabelMarker:(id)a1;
- (void)lookAroundView:(id)a0 didSelectLabelMarker:(id)a1;
- (void)lookAroundView:(id)a0 didTapAtPoint:(struct CGPoint { double x0; double x1; })a1 areaAvailable:(BOOL)a2;
- (void)lookAroundView:(id)a0 didTapLabelMarker:(id)a1;
- (void)lookAroundView:(id)a0 didZoomWithDirection:(long long)a1 type:(long long)a2;
- (void)lookAroundViewDidChangeRegion:(id)a0;
- (void)lookAroundViewDidPan:(id)a0;
- (void)lookAroundViewDidStartUserInteraction:(id)a0;
- (void)lookAroundViewDidStopUserInteraction:(id)a0;
- (void)lookAroundViewWillChangeLocationInfo:(id)a0;

@end
