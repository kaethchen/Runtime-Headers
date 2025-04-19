@class NSMapTable;

@interface HKMultimap : NSObject <NSCopying> {
    NSMapTable *_table;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)multimapWithStrongObjects;
+ (id)multimapWithWeakObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithType:(long long)a0;
- (id)objectsForKey:(id)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;

@end
