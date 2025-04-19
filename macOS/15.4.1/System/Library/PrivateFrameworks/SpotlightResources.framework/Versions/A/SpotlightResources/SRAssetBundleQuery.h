@class NSMutableDictionary;

@interface SRAssetBundleQuery : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queryEntries;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)xpcObject;
- (void)addQueryEntriesForLanguage:(id)a0 assetType:(id)a1 deliveryTypes:(id)a2;
- (void)enumerateEntriesForLanguage:(id)a0 block:(id /* block */)a1;
- (id)initWithXPCObject:(id)a0 isResult:(BOOL)a1;

@end
