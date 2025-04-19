@class HMIPersonsModelManager, NSUUID, HMIGreedyClustering, NSDate, HMIClusteringTaskSummary;
@protocol HMIHomePersonManagerDataSource, HMIFaceClassifier;

@interface HMIHomePersonClusteringTask : HMIHomeTask {
    HMIGreedyClustering *_clusterer;
    id<HMIFaceClassifier> _faceClassifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) HMIClusteringTaskSummary *summary;
@property (readonly) NSDate *startTime;
@property (readonly) BOOL doImpurePersonCleanup;
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) HMIPersonsModelManager *personsModelManager;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)finish;
- (id)personCreatedDateFromFaceCrops:(id)a0;
- (void)_stageZero_expireUnnamedPersons;
- (void)_stageFive_associateFaceCropsWithClusterMapping:(id)a0 faceprints:(id)a1;
- (void)_stageFour_clusterFaceprints:(id)a0;
- (void)_stageOne_fetchFaceCrops;
- (void)_stageThree_generateFaceprintsForFaceCrops:(id)a0 existingFaceprints:(id)a1;
- (void)_stageTwo_fetchFaceprints:(id)a0;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 dataSource:(id)a2 sourceUUID:(id)a3 personsModelManager:(id)a4 doImpurePersonCleanup:(BOOL)a5 error:(id *)a6;
- (void)mainInsideAutoreleasePool;
- (void)removePerson:(id)a0;

@end
