@class NSMapTable, NSMutableArray;

@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
    NSMutableArray *_strongRefs;
}

+ (id)cache;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(unsigned int)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;

@end
