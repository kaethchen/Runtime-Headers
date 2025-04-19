@class NSUUID, NSString, NSData, BootCacheItemStoreKey;

@interface BootCacheItemStore : NSObject {
    NSData *_storeData;
    void *_store;
}

@property (readonly) BootCacheItemStoreKey *firstKey;
@property (readonly, copy) NSUUID *storeUUID;
@property (readonly, copy) NSString *bootCacheLibVersionStr;

+ (id)storeWithBytes:(const void *)a0 length:(long long)a1;
+ (id)storeWithData:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStore:(void *)a0;
- (id)getItem:(id)a0;
- (id)getNamedItem:(id)a0;
- (id)storeUUID;
- (id)bootCacheLibVersionStr;
- (BOOL)enumerateKeys:(id /* block */)a0;
- (id)getIndexedItem:(id)a0 ofClass:(Class)a1;
- (id)getItem:(id)a0 ofClass:(Class)a1;
- (id)getItemOffsetArray:(id)a0;
- (id)getNamedItemKey:(id)a0;
- (id)getNamedItemsArray:(id)a0;
- (id)nextKey:(id)a0;

@end
