@interface RMAssetResolverController : NSObject <RMAssetResolverControllerProtocol>

+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveDataAsset:(id)a0 assetIdentifier:(id)a1 downloadURL:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_fetchAssetDeclarationWithAssetIdentifier:(id)a0 configurationIdentifier:(id)a1 subscriberStore:(id)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;
+ (void)_fetchSubscriberStoreIfNeededWithSubscriberStore:(id)a0 configurationIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
+ (void)_resolveDataAsset:(id)a0 assetIdentifier:(id)a1 store:(id)a2 downloadURL:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)_resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 configurationKey:(id)a2 store:(id)a3 accessGroup:(id)a4 completionHandler:(id /* block */)a5;
+ (void)_resolveKeychainAssets:(id)a0 assetIdentifiers:(id)a1 accessGroup:(id)a2 persistentRefs:(id)a3 completionHandler:(id /* block */)a4;
+ (void)_resolveKeychainAssetsWithAssetIdentifiers:(id)a0 configurationIdentifier:(id)a1 accessGroup:(id)a2 subscriberStore:(id)a3 persistentRefs:(id)a4 completionHandler:(id /* block */)a5;
+ (void)extractUserIdentityAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resolveDataAssetWithAssetIdentifier:(id)a0 configurationIdentifier:(id)a1 downloadURL:(id)a2 subscriberStore:(id)a3 scope:(long long)a4 completionHandler:(id /* block */)a5;
+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)resolveKeychainAsset:(id)a0 assetIdentifier:(id)a1 subscriberIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveKeychainAssetWithAssetIdentifier:(id)a0 configurationIdentifier:(id)a1 accessGroup:(id)a2 subscriberStore:(id)a3 scope:(long long)a4 completionHandler:(id /* block */)a5;
+ (void)resolveKeychainAssets:(id)a0 assetIdentifiers:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveKeychainAssetsWithAssetIdentifiers:(id)a0 configurationIdentifier:(id)a1 accessGroup:(id)a2 subscriberStore:(id)a3 scope:(long long)a4 completionHandler:(id /* block */)a5;
+ (void)resolveKeychainPasswordAsset:(id)a0 assetIdentifier:(id)a1 accessGroup:(id)a2 completionHandler:(id /* block */)a3;
+ (void)resolveUserNameAndPasswordAsset:(id)a0 assetIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
