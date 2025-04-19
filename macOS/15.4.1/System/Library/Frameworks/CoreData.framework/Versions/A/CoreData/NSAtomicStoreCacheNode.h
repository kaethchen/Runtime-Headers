@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)initWithObjectID:(id)a0;
- (const id *)knownKeyValuesPointer;

@end
