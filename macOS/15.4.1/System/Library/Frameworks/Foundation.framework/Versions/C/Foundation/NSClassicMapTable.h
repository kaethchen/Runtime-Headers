@interface NSClassicMapTable : NSMapTable {
    struct { void /* function */ *hash; void /* function */ *isEqual; void /* function */ *retain; void /* function */ *release; void /* function */ *describe; void *notAKeyMarker; } _keyCallBacks;
    struct { void /* function */ *retain; void /* function */ *release; void /* function */ *describe; } _valueCallBacks;
    struct __CFBasicHash { } *_ht;
}

- (void)dealloc;
- (id)copy;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)allKeys;
- (id)allValues;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (void)_reclaim;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (void)removeAllItems;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;

@end
