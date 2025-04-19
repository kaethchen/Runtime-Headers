@class NSDictionary, PLFeatureProcessingSnapshot;

@interface PLFeatureAvailability : NSObject

@property (readonly, nonatomic) PLFeatureProcessingSnapshot *processingSnapshot;
@property (readonly, nonatomic) NSDictionary *availabilityByFeature;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)availabilityFromFeatureAvailability:(id)a0 withGraphIsAvailable:(BOOL)a1;
+ (id)_computeAvailabilityStatusFromSnapshot:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)fractionForFeature:(id)a0;
- (id)initWithProcessingSnapshot:(id)a0;

@end
