@class NSImageView;

@interface SiriSharedUIDeviceMotionEffectView : NSView {
    NSImageView *_effectImageView;
    BOOL _shouldUpdateOffsetRadians;
    BOOL _forcefullyUpdateImageViewFrame;
    double _initialOffsetRadians;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)wantsDefaultClipping;
- (void)_updateEffectView;
- (void)_cleanUpIfNeeded;
- (void)_configureDeviceMotionIfNeeded;
- (BOOL)_supportsContentViewTransforms;
- (BOOL)_supportsDeviceMotion;
- (BOOL)isViewHighContrast;
- (void)updateMaskingForView:(id)a0;
- (long long)viewAppearanceStyle;
- (void)viewWillBeUpdated;

@end
