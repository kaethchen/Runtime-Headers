@class NSDateFormatter, NSString, NSMutableSet, PLFrequentLocationManager, PLLocalCreationDateCreator, NSMutableArray;
@protocol PLMomentGenerationDataManagement;

@interface PLAssetCollectionGenerator : NSObject <PLLibraryClustererDelegate>

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> manager;
@property (retain, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (retain, nonatomic) NSMutableSet *usedMomentObjectIDs;
@property (retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments;
@property (retain, nonatomic) NSMutableArray *momentsFromAssetClusters;
@property (retain, nonatomic) NSDateFormatter *debugDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createMomentOrUpdateForAssetCluster:(id)a0 affectedMoment:(id)a1 dataManager:(id)a2;
+ (id)_createMomentOrUpdateForAssetCluster:(id)a0 existingMomentDataForAssets:(id)a1 dataManager:(id)a2 usedMomentObjectIDs:(id)a3 debugDateFormatter:(id)a4;

- (void).cxx_destruct;
- (void)_cleanUpMoment:(id)a0;
- (id)_createMomentOrUpdateForAssetCluster:(id)a0 existingMomentDataForAssets:(id)a1;
- (id)_processMomentsCollectionsYearsWithAssets:(id)a0 affectedMoments:(id)a1;
- (BOOL)_updateMomentProcessedLocationAndReturnFrequentLocationsDidChange;
- (id)dataManager;
- (id)initWithDataManager:(id)a0 frequentLocationManager:(id)a1 localCreationDateCreator:(id)a2;
- (id)libraryClusterer:(id)a0 createMomentClustersForAssetClusters:(id)a1 existingMomentDataForAssets:(id)a2;
- (void)logRoutineInformation;
- (id)processMomentsWithAssets:(id)a0 affectedMoments:(id)a1;

@end
