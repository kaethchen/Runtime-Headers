@class NSString;

@interface CBSliderMappingNonLUT : NSObject <CBSliderMapping> {
    unsigned long long _type;
    float _minNits;
    float _maxNits;
    float _midNits;
    float _midSlider;
    float _A;
    float _B;
    float _C;
    float _IMax;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)configureFitFactors;
- (id)copyStatusInfo;
- (id)initWithType:(unsigned long long)a0 minNits:(float)a1 maxNits:(float)a2 midNits:(float)a3 andMidSlider:(float)a4;
- (float)nitsForSlider:(float)a0;
- (float)sliderForNits:(float)a0;
- (float)sliderToIntensity:(float)a0;

@end
