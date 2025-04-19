@class NSMutableDictionary;

@interface CDMAssetsCache : NSObject {
    id /* block */ _validateAssetSetHandler;
    NSMutableDictionary *_validatedAssetSets;
    NSMutableDictionary *_assetSetObservers;
}

+ (id)getAssetsFromUAFAssetSet:(id)a0;
+ (id)getHashKeyForAssetSetName:(id)a0 withUsages:(id)a1;
+ (id)getNameFromUAFAssetSet:(id)a0;
+ (id)getUsagesFromUAFAssetSet:(id)a0;
+ (id)initUAFAssetSetWithAssetSetName:(id)a0 andUsages:(id)a1;
+ (void)subscribeToAssetSet:(long long)a0 withUsages:(id)a1 forSubscriber:(id)a2 withSubscriptionName:(id)a3 withExpiration:(id)a4;

- (void).cxx_destruct;
- (id)getCurrentAssetSetForAssetSetName:(long long)a0 withUsages:(id)a1;
- (id)initWithValidateAssetSetHandler:(id /* block */)a0;
- (void)markAssetSetValidated:(id)a0;

@end
