@class NSString, NSArray;

@interface CBSliderMappingLUT : NSObject <CBSliderMapping> {
    NSArray *_LUT;
    float _pivot;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyStatusInfo;
- (float)getMaxSliderNits;
- (id)initWithLUT:(id)a0 pivot:(float)a1;
- (id)initWithRawLUT:(id)a0 pivot:(float)a1;
- (id)newCurveWith140nitsMidFromCurve:(id)a0;
- (float)nitsForSlider:(float)a0;
- (float)sliderForNits:(float)a0;

@end
