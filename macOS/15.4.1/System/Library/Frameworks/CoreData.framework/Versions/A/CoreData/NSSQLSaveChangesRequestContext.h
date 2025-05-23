@class NSString, NSArray, NSSQLRowCache, NSSet, NSMutableDictionary, NSDictionary, NSFaultHandler, NSSQLSavePlan;

@interface NSSQLSaveChangesRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_metadataToWrite;
    NSSQLSavePlan *_savePlan;
    NSFaultHandler *_faultHandler;
    NSArray *_objectIDsInsertUpdatedToPruneDATrigger;
    NSArray *_objectIDsUpdatedToPruneDATrigger;
    NSSet *_objectIDsToPruneTrigger;
    NSMutableDictionary *_originalCachedRows;
    NSMutableDictionary *_updateMasksForHistoryTracking;
    NSString *_externalDataReferencesDirectory;
    NSString *_externalDataLinksDirectory;
    NSString *_fileBackedFuturesDirectory;
    NSSQLRowCache *_primaryRowCache;
    NSSQLRowCache *_contextGenerationRowCache;
}

- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (id)rowCache;

@end
