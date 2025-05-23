@class NSMutableDictionary, NSMutableSet, NSMutableArray, CKRecord;

@interface TCKDatabase : NSObject

@property (readonly, nonatomic) NSMutableDictionary *recordsByID;
@property (retain, nonatomic) NSMutableArray *tQueriedRecordTypes;
@property (retain, nonatomic) NSMutableArray *tQueriedRecordZonesNames;
@property (retain, nonatomic) NSMutableArray *tFetchedRecords;
@property (retain, nonatomic) NSMutableArray *tFetchedChangedRecordZoneNames;
@property (retain, nonatomic) NSMutableArray *tQueriedRecords;
@property (retain, nonatomic) NSMutableArray *tSavedRecords;
@property (retain, nonatomic) NSMutableSet *tSavedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedZones;
@property (retain, nonatomic) NSMutableArray *tDeletedZoneIDs;
@property (retain, nonatomic) NSMutableArray *tDeletedRecordIDs;
@property (retain, nonatomic) NSMutableArray *tSavedSubscriptions;
@property (copy, nonatomic) id /* block */ tQueryHandler;
@property (copy, nonatomic) id /* block */ tFetchRecordsHandler;
@property (copy, nonatomic) id /* block */ tModifyRecordsOperationHandler;
@property (copy, nonatomic) id /* block */ tModifyRecordsHandler;
@property (copy, nonatomic) id /* block */ tFetchZonesHandler;
@property (copy, nonatomic) id /* block */ tModifyZonesHandler;
@property (copy, nonatomic) id /* block */ tFetchZoneChangesHandler;
@property (copy, nonatomic) id /* block */ tFetchRecordZoneChangesOperationHandler;
@property (copy, nonatomic) id /* block */ tFetchDatabaseChangesHandler;
@property (readonly, nonatomic) CKRecord *sentinelRecord;
@property (readonly, nonatomic) CKRecord *secureSentinelRecord;

- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)addRecord:(id)a0;
- (id)recordIDsInZoneName:(id)a0;
- (id)recordWithID:(id)a0;

@end
