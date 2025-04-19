@class NSString;

@interface CBSliderMappingGeneric : NSObject <CBSliderMapping> {
    struct { BOOL allowZeroNits; float minNits; float midNits; float maxNits; float minSlider; float midSlider; float maxSlider; } _panelParameters;
    float _b1;
    float _m1;
    float _b2;
    float _m2;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureSegmentCoefficients;
- (id)copyStatusInfo;
- (id)initWithPanelParameters:(struct { BOOL x0; float x1; float x2; float x3; float x4; float x5; float x6; })a0;
- (float)nitsForSlider:(float)a0;
- (float)sliderForNits:(float)a0;
- (void)validateParameters;

@end
