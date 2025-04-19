@class NSString, KVItemMapper, NSNumber;

@interface KMPortraitEntitiesBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
    NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;

@end
