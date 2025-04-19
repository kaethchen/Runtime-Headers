@interface PXAssetSupportChecker : NSObject

+ (void)_alertTitleAndMessageForAsset:(id)a0 type:(long long)a1 title:(id *)a2 message:(id *)a3;
+ (void)checkIsSupportedAsset:(id)a0 type:(long long)a1 completionHandler:(id /* block */)a2;
+ (BOOL)isSupportedAsset:(id)a0 type:(long long)a1;

@end
