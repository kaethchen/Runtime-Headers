@class NSDictionary, NSArray, NSSet;

@interface GDVUGallery : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) BOOL ready;
@property (nonatomic, readonly) long long faceprintRevision;
@property (nonatomic, readonly) long long torsoprintRevision;
@property (nonatomic, readonly) long long animalprintRevision;
@property (nonatomic, readonly) long long observationsCount;
@property (nonatomic, readonly) long long primaryCount;
@property (nonatomic, readonly) long long secondaryCount;
@property (nonatomic, readonly) long long personObservationsCount;
@property (nonatomic, readonly) long long animalObservationsCount;
@property (nonatomic, readonly) long long tagsCount;
@property (nonatomic, readonly) long long entityCount;
@property (nonatomic, readonly) long long personEntitiesCount;
@property (nonatomic, readonly) long long animalEntitiesCount;
@property (nonatomic, readonly) NSDictionary *observationsCountPerEntity;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSSet *unassignedObservations;

- (id)init;
- (void).cxx_destruct;
- (void)reportMetrics;
- (BOOL)resetAndReturnError:(id *)a0;
- (id)clustersFor:(id)a0;
- (id)keyObservationsFor:(long long)a0 limit:(long long)a1 offset:(long long)a2;
- (BOOL)mutateAndReturnError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)resetWithType:(long long)a0 error:(id *)a1;
- (BOOL)updateAndReturnError:(id *)a0 progressHandler:(id /* block */)a1;
- (void)updateInferredDeviceOwner;
- (void)updateSocialGroupsWithSocialGroups:(id)a0;

@end
