@class NSDictionary, CAPackage, CALayer;

@interface UINSGameModuleEducationView : NSView {
    CAPackage *_onboardingAssetsPackage;
    CALayer *_keyboardLayer;
    CALayer *_mouseLayer;
    CALayer *_trackpadLayer;
}

@property (retain) NSDictionary *featureLayers;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (id)findLabelGuideLayerForFeature:(id)a0;
- (id)initWithCAPackage:(id)a0 pointingDevice:(id)a1;
- (id)layerNamed:(id)a0;

@end
