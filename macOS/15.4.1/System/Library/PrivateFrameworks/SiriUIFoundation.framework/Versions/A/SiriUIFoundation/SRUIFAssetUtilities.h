@class UAFAssetUtilities;

@interface SRUIFAssetUtilities : NSObject {
    UAFAssetUtilities *_assetUtilities;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)downloadAssets;

@end
