@interface RTMapItemProviderReverseGeocodeParameters : NSObject

@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) double relatedPlacesConfidence;

- (id)description;
- (id)init;
- (id)initWithConfidence:(double)a0 relatedPlacesConfidence:(double)a1;
- (id)initWithDefaultsManager:(id)a0;

@end
