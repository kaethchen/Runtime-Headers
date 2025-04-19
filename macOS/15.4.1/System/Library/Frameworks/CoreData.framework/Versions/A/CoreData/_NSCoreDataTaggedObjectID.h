@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (void)_setStoreInfo1:(id)a0;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (void)setObjectStoreIdentifier:(id)a0;

- (oneway void)release;
- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithObject:(id)a0;
- (id)entityName;
- (id)entity;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)initWithPK64:(long long)a0;
- (BOOL)isTemporaryID;

@end
