@class NSString, PHASEAssetRegistry;

@interface PHASEAsset : NSObject

@property (weak) PHASEAssetRegistry *assetRegistry;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly) NSString *uid;
@property (readonly) NSString *owningDataBundleIdentifier;
@property (readonly) NSString *identifier;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)setUid:(id)a0;
- (id)uid;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (void)setOwningDataBundleIdentifier:(id)a0;

@end
