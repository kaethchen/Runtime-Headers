@class NSString, CLSServiceManager;

@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria> {
    CLSServiceManager *_serviceManager;
}

@property (nonatomic) unsigned long long minimumDuration;
@property (nonatomic) BOOL includeRoutineVisitsInDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;
- (void)setServiceManager:(id)a0;

@end
