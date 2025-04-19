@class NUColorSpace, IHKSliderNetCPModel, NSData;
@protocol NUScalePolicy;

@interface PISliderNetBaseRequest : NURenderRequest

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) IHKSliderNetCPModel *sliderNetModel;
@property (copy, nonatomic) NSData *assetScenePrint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0 sliderNetModel:(id)a1;

@end
