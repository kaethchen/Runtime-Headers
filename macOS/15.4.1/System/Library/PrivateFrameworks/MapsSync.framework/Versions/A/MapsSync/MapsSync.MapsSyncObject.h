@class NSDate, NSUUID, NSString, _TtC8MapsSync13MapsSyncStore, NSLock, NSManagedObjectID;

@interface MapsSync.MapsSyncObject : NSObject {
    void /* unknown type, empty encoding */ _store;
    void /* unknown type, empty encoding */ _managedObjectId;
    void /* unknown type, empty encoding */ _propertyLock;
    void /* unknown type, empty encoding */ _editBlocks;
    void /* unknown type, empty encoding */ _identifier;
    void /* unknown type, empty encoding */ _createTime;
    void /* unknown type, empty encoding */ _modificationTime;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ lazyLoad;
@property (nonatomic, readonly) NSLock *propertyLock;
@property (nonatomic, retain) NSManagedObjectID *managedId;
@property (nonatomic, readonly) BOOL isStored;
@property (nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *store;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)findDuplicatesWithContext:(id)a0;
+ (id)mergeWithDuplicates:(id)a0;
+ (id)strippedMapItemWith:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)addEdit:(id)a0 :(id /* block */)a1;
- (void)flushChanges;
- (id)getManagedObjectOnContextWithLock:(id)a0 context:(id)a1;
- (id)getManagedObjectWithContext:(id)a0;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)onDeleteWithManagedObject:(id)a0 context:(id)a1;
- (void)performEditsOnContextWithLock:(id)a0 managedObject:(id)a1;
- (void)performEditsWithManagedObject:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;
- (void)withPropertyLock:(id /* block */)a0;

@end
