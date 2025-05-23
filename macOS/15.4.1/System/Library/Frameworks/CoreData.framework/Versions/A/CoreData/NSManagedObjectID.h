@class NSString, NSEntityDescription, NSPersistentStore;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSEntityDescription *entity;
@property (readonly, weak) NSPersistentStore *persistentStore;
@property (readonly, getter=isTemporaryID) BOOL temporaryID;

+ (void)initialize;
+ (long long)version;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)_generateTemporaryIDForEntity:(id)a0;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (long long)compare:(id)a0;
- (id)entityName;
- (id)URIRepresentation;
- (id)storeIdentifier;
- (BOOL)_isPersistentStoreAlive;
- (BOOL)_preferReferenceData64;
- (id)_referenceData;
- (long long)_referenceData64;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (int)_temporaryIDCounter;
- (id)initWithPK64:(long long)a0;

@end
