@class NSString, NSMutableDictionary, NSUUID, PFCloudKitFetchedAssetBytesMetric, NSMutableArray, PFCloudKitFetchedRecordBytesMetric;

@interface PFCloudKitImportRecordsWorkItem : PFCloudKitImporterWorkItem <PFCloudKitSerializerDelegate> {
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSUUID *_importOperationIdentifier;
    NSMutableArray *_updatedRecords;
    unsigned long long _totalOperationBytes;
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_allRecordIDs;
    NSMutableArray *_encounteredErrors;
    NSMutableArray *_failedRelationships;
    NSMutableArray *_incrementalResults;
    NSMutableArray *_unknownItemRecordIDs;
    NSMutableDictionary *_updatedShares;
    unsigned long long _currentOperationBytes;
    unsigned long long _countUpdatedRecords;
    unsigned long long _countDeletedRecords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)addUpdatedRecord:(id)a0;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (void)cloudKitSerializer:(id)a0 failedToUpdateRelationship:(id)a1 withError:(id)a2;
- (id)cloudKitSerializer:(id)a0 safeSaveURLForAsset:(id)a1;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (id)createMirroringResultForRequest:(id)a0 storeIdentifier:(id)a1 success:(BOOL)a2 madeChanges:(BOOL)a3 error:(id)a4;
- (void)doWorkForStore:(id)a0 inMonitor:(id)a1 completion:(id /* block */)a2;
- (id)entityNameToAttributesToUpdate;
- (id)entityNameToRelationshipsToUpdate;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithOptions:(id)a0 request:(id)a1;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;

@end
