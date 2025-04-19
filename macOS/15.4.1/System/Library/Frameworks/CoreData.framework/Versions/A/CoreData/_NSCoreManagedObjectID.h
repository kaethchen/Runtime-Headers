@interface _NSCoreManagedObjectID : NSManagedObjectID

+ (void)release;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)retain;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)_setStoreInfo1:(id)a0;
+ (void)_release_1;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (BOOL)_usesTaggedPointers;
+ (unsigned int)allocateBatch:(id *)a0 count:(unsigned int)a1;
+ (Class)classWithStore:(id)a0 andEntity:(id)a1;
+ (char *)generatedNameSuffix;
+ (id)managedObjectIDFromURIRepresentation:(id)a0;
+ (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
+ (void)setObjectStoreIdentifier:(id)a0;

- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)entityName;
- (id)entity;
- (id)URIRepresentation;
- (id)persistentStore;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (BOOL)isTemporaryID;

@end
