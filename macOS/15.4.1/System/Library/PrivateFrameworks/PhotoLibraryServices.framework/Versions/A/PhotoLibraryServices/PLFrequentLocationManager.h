@class NSSet;
@protocol PLMomentGenerationDataManagement;

@interface PLFrequentLocationManager : NSObject {
    BOOL _invalidateCurrentFrequentLocations;
}

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;
@property (retain, nonatomic) NSSet *currentFrequentLocations;

- (void).cxx_destruct;
- (id)_createFrequentLocationsWithMoments:(id)a0;
- (BOOL)frequentLocationsDidChangeFromUpdateWithMoments:(id)a0;
- (id)initWithMomentGenerationDataManager:(id)a0;
- (void)invalidateCurrentFrequentLocations;

@end
