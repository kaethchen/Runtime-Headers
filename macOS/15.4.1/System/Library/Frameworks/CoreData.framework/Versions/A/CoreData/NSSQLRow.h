@interface NSSQLRow : NSPersistentCacheRow <NSCopying> {
    _Atomic id _snapshot;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (unsigned int)newBatchRowAllocation:(id *)a0 count:(unsigned int)a1 forSQLEntity:(id)a2 withOwnedObjectIDs:(id *)a3 andTimestamp:(double)a4;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)version;
- (id)valueForKey:(id)a0;
- (id)objectID;
- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (id)initWithSQLEntity:(id)a0 objectID:(id)a1;
- (id)initWithSQLEntity:(id)a0 ownedObjectID:(id)a1 andTimestamp:(double)a2;
- (const id *)knownKeyValuesPointer;
- (id)newObjectIDForToOne:(id)a0;
- (void)setForeignEntityKeySlot:(unsigned int)a0 entityKey:(unsigned int)a1;
- (void)setForeignKeySlot:(unsigned int)a0 int64:(long long)a1;
- (void)setForeignOrderKeySlot:(unsigned int)a0 orderKey:(unsigned int)a1;
- (void)setObjectID:(id)a0;
- (void)setOptLock:(long long)a0;

@end
