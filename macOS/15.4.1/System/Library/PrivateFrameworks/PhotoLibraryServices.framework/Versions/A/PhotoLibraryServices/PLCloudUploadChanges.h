@class NSMutableArray, NSMutableSet;

@interface PLCloudUploadChanges : NSObject

@property (retain, nonatomic) NSMutableArray *insertedAssets;
@property (retain, nonatomic) NSMutableArray *updatedAssets;
@property (retain, nonatomic) NSMutableArray *deferredAssets;
@property (retain, nonatomic) NSMutableSet *adjustedAssetUuids;
@property (retain, nonatomic) NSMutableSet *propertyChangedAssetUuids;
@property (retain, nonatomic) NSMutableSet *sharingPropertyChangedAssetUuids;
@property (retain, nonatomic) NSMutableSet *faceChangedAssetUuids;
@property (retain, nonatomic) NSMutableSet *computeSyncChangedAssets;
@property (retain, nonatomic) NSMutableArray *updatedMasters;
@property (retain, nonatomic) NSMutableArray *insertedResources;
@property (retain, nonatomic) NSMutableArray *updatedResources;
@property (retain, nonatomic) NSMutableArray *albumInserts;
@property (retain, nonatomic) NSMutableArray *albumChanges;
@property (retain, nonatomic) NSMutableArray *memoryChanges;
@property (retain, nonatomic) NSMutableArray *personChanges;
@property (retain, nonatomic) NSMutableArray *faceCropChanges;
@property (retain, nonatomic) NSMutableArray *suggestionChanges;
@property (retain, nonatomic) NSMutableArray *userFeedbackChanges;
@property (retain, nonatomic) NSMutableArray *libraryScopeChanges;
@property (retain, nonatomic) NSMutableArray *socialGroupChanges;
@property (retain, nonatomic) NSMutableSet *updatedRelationship;
@property (retain, nonatomic) NSMutableArray *deletedRecords;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)summaryCounts;

@end
