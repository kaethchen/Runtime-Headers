@class REMObjectID, NSString, REMChangeTracking, NSArray, NSMutableDictionary, REMChangeTrackingState, REMStore, REMChangeToken, REMChangeSet;
@protocol REMDAAccountProviding;

@interface REMDAChangeTrackingHelper : NSObject

@property (retain, nonatomic) REMChangeSet *changeSet;
@property (retain, nonatomic) REMChangeToken *sinceToken;
@property (retain, nonatomic) REMChangeToken *upToToken;
@property (retain, nonatomic) REMStore *remStore;
@property (retain, nonatomic) REMChangeTracking *changeTracking;
@property (retain, nonatomic) REMObjectID *cached_remAccountObjectID;
@property (retain, nonatomic) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName;
@property (retain, nonatomic) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName;
@property (retain, nonatomic) REMChangeToken *cached_currentChangeToken;
@property (retain, nonatomic) REMChangeTrackingState *cached_currentTrackingState;
@property (retain, nonatomic) REMChangeSet *_debug_mockChangeSet;
@property (retain, nonatomic) NSArray *entityNames;
@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) id<REMDAAccountProviding> account;

+ (BOOL)shouldIgnoreChangeOfModelClassProperties:(Class)a0 withChangeObject:(id)a1;

- (void).cxx_destruct;
- (id)changedIdentifiersOfModelClass:(Class)a0 ofChangeType:(long long)a1;
- (id)changedModelObjectsOfModelClass:(Class)a0 ofChangeType:(long long)a1;
- (void)clearCachedModelObjectResultsForModelClass:(Class)a0;
- (id)fetchAndInitializeChangeTrackingStateIfNeeded;
- (id)fetchChangesSinceLastConsumed;
- (id)initWithREMDAAccount:(id)a0 clientName:(id)a1 withREMStore:(id)a2;
- (void)markChangesConsumed;
- (id)_cachedModeObjectResultsForModelClass:(Class)a0 changeType:(long long)a1;
- (long long)_changeTypeMaskFromChangeType:(long long)a0;
- (id)_changedModelObjectsOfClass:(Class)a0 ofChangeTypes:(long long)a1 shouldOutputFetchedModels:(BOOL)a2;
- (id)_debug_currentChangeTokenWithError:(id *)a0;
- (void)_debug_resetCaches;
- (void)_debug_setMockChangeSet:(id)a0;
- (id)_fetchModelObjectOfClass:(Class)a0 withObjectID:(id)a1 includeConcealedObjects:(BOOL)a2;
- (id)_fetchModelObjectsOfClass:(Class)a0 withObjectIDs:(id)a1;
- (void)_handleIsConcealedUpdatesInChange:(id)a0 ofModelClass:(Class)a1 forClientID:(id)a2 concealedHandler:(id /* block */)a3 unconcealedHandler:(id /* block */)a4;
- (id)_rem_accountObjectID;
- (id)_rem_changeTracking:(id)a0;
- (void)_setCachedModeObjectResults:(id)a0 forModelClass:(Class)a1 changeType:(long long)a2;
- (BOOL)compareCurrentChangeTokenToLastConsumedWithResult:(long long *)a0 error:(id *)a1;
- (id)currentChangeTokenWithError:(id *)a0;
- (id)initWithREMDAAccount:(id)a0 clientName:(id)a1 withREMStore:(id)a2 entityNames:(id)a3;
- (void)markChangesConsumed:(BOOL)a0;

@end
