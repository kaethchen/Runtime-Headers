@interface _LTDUAFAssetService : NSObject <_LTDAssetServiceProtocol>

+ (unsigned long long)assetTypeForAssetIdentifier:(id)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;

@end
