@class _REMNSPersistentHistoryChangeStorage, NSArray, REMChangeTransaction, REMObjectID, NSManagedObjectID;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly) NSManagedObjectID *persistentHistoryChangeObjectID;
@property (retain) REMObjectID *cachedChangedREMObjectID;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)shortStringForChangeType:(long long)a0;
+ (id)stringForChangeType:(long long)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)changeType;
- (id)transaction;
- (id)changedObjectID;
- (id)initWithStorage:(id)a0;
- (id)tombstone;
- (long long)changeID;
- (id)updatedProperties;
- (id)changedManagedObjectID;
- (id)copyForCoalescing;
- (id)initWithPersistentHistoryChange:(id)a0;
- (void)resolveObjectIDWithUUID:(id)a0 entityName:(id)a1;

@end
