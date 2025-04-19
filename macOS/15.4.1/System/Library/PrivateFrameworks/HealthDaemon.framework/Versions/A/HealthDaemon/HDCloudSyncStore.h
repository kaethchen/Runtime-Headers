@class NSUUID, NSString, HDProfile, HDSyncIdentity, HDCloudSyncShardPredicate, NSSet;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore> {
    long long _syncProvenance;
    long long _syncEpoch;
    int _syncProtocolVersion;
    NSSet *_excludedSyncIdentities;
}

@property (readonly, copy, nonatomic) NSUUID *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) HDSyncIdentity *syncIdentity;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HDCloudSyncShardPredicate *shardPredicate;
@property (readonly, nonatomic) BOOL syncTombstonesOnly;
@property (readonly, nonatomic) BOOL supportsRebase;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createOrUpdateShardStoresForProfile:(id)a0 throughDate:(id)a1 ownerIdentifier:(id)a2 containerIdentifier:(id)a3 syncIdentity:(id)a4 error:(id *)a5;
+ (BOOL)providesSamplePruningRestrictionPredicate;
+ (void)samplesDeletedInProfile:(id)a0 byUser:(BOOL)a1 intervals:(id)a2;
+ (id)shardIntervalWithStartDate:(id)a0 endDate:(id)a1;
+ (id)shardPredicatesForProfile:(id)a0 currentDate:(id)a1 error:(id *)a2;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 error:(id *)a2;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 ownerIdentifier:(id)a2 syncIdentity:(id)a3 containerIdentifier:(id)a4 creationDate:(id)a5 error:(id *)a6;
+ (id)syncStoreForProfile:(id)a0 storeIdentifier:(id)a1 ownerIdentifier:(id)a2 syncIdentity:(id)a3 containerIdentifier:(id)a4 error:(id *)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (id)getPersistedAnchorMapWithError:(id *)a0;
- (id)receivedSyncAnchorMapWithError:(id *)a0;
- (BOOL)_isSupportedShardTypeForRestrictionPredicates;
- (id)_syncAnchorMapByStrippingBlockedEntities:(id)a0;
- (BOOL)canRecieveSyncObjectsForEntityClass:(Class)a0;
- (BOOL)clearAllSyncAnchorsWithError:(id *)a0;
- (BOOL)enforceSyncEntityOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)a0;
- (id)orderedSyncEntities;
- (BOOL)persistState:(id)a0 error:(id *)a1;
- (id)persistedStateWithError:(id *)a0;
- (id)primaryOrderedSyncEntities;
- (BOOL)providesSamplePruningRestrictionPredicate;
- (BOOL)replaceFrozenAnchorMap:(id)a0 updateDate:(id)a1 error:(id *)a2;
- (BOOL)replacePersistedAnchorMap:(id)a0 error:(id *)a1;
- (BOOL)resetReceivedSyncAnchorMapWithError:(id *)a0;
- (id)samplePruningRestrictionPredicateForSyncEntity:(Class)a0 error:(id *)a1;
- (void)setExpectedSequenceNumber:(long long)a0 forSyncEntityClass:(Class)a1;
- (BOOL)shouldContinueAfterAnchorValidationError:(id)a0;
- (BOOL)shouldEnforceSequenceOrdering;
- (BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)a0;
- (id)syncEntityDependenciesForSyncEntity:(Class)a0;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreForEpoch:(long long)a0;
- (id)syncStoreForProtocolVersion:(int)a0;
- (id)syncStoreForTombstoneSyncOnly:(BOOL)a0;

@end
