@class MAAutoAssetSelector;

@interface DDSMAAutoAssetSelector : NSObject

@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector;

+ (id)allSupportedLinguisticAssetTypeForAssetType:(id)a0;
+ (id)createWithQuery:(id)a0 supportedAssetSpecifiers:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1;

@end
