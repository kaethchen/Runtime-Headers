@class MSVLRUDictionary, NSMapTable;

@interface MPStoreItemMetadataCache : NSObject {
    MSVLRUDictionary *_itemIdentifierToCompositeStoreItemMetadataLRUDictionary;
    NSMapTable *_itemIdentifierToCompositeStoreItemMetadataMapTable;
}

@property (readonly, nonatomic) long long count;

- (void).cxx_destruct;
- (id)addMetadata:(id)a0 forItemIdentifier:(id)a1;
- (id)initWithCacheSize:(long long)a0;
- (id)metadataForItemIdentifier:(id)a0;
- (id)metadataForItemIdentifier:(id)a0 ignoreExpiration:(BOOL)a1;
- (void)removeExpiredMetadata;

@end
