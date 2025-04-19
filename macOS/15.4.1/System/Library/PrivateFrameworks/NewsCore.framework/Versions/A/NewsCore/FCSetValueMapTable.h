@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (id)_setForKey:(id)a0;
- (id)objectsForKey:(id)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;

@end
