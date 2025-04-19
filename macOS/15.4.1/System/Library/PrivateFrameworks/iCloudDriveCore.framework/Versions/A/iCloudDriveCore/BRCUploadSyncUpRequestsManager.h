@class NSString, NSNumber, NSMutableDictionary;

@interface BRCUploadSyncUpRequestsManager : NSObject {
    NSString *_personaIdentifer;
    NSNumber *_latestSourceIdentifier;
    NSMutableDictionary *_requestsByItemGlobalID;
    NSMutableDictionary *_zoneIDToItemIDs;
}

+ (id)_fetchManagersDictionary;
+ (id)defaultManagerWithPersonaIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)_callFinishBlockOnDataRequest:(id)a0 finishError:(id)a1;
- (id)_initWithPersonaIdentifier:(id)a0;
- (void)_invalidateRequestsTableWithNewSource:(id)a0;
- (BOOL)cancelRequestForIdentifier:(id)a0 error:(id *)a1;
- (void)dumpToContext:(id)a0;
- (BOOL)finishRequestForIdentifer:(id)a0 finishError:(id)a1 error:(id *)a2;
- (void)finishRequestForItemsInZoneRowID:(id)a0 finishError:(id)a1;
- (id)getProgressForIdentifier:(id)a0;
- (void)invalidateRequestsOfClient:(id)a0;
- (BOOL)registerRequestForIdentifier:(id)a0 requestType:(short)a1 requestSource:(id)a2 progress:(id)a3 finishBlock:(id /* block */)a4 error:(id *)a5;

@end
