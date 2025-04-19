@interface NSClassicHashTable : NSHashTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _callBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)dealloc;
- (id)copy;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (void *)getItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (void)insertItem:(const void *)a0;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)removeAllItems;
- (void)removeItem:(const void *)a0;

@end
