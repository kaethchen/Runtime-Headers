@class NSData;

@interface PISliderNetAdjustmentsRequest : PISliderNetBaseRequest

@property (retain, nonatomic) NSData *styleFeatureVectorData;
@property (retain, nonatomic) NSData *contentFeatureVectorData;
@property (nonatomic) double similarityGatingThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
