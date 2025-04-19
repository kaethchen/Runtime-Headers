@class NSArray;

@interface TRIGenericRequiredAssets : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *cloudKit;
@property (readonly, nonatomic) NSArray *mobileAsset;

+ (id)assetsWithCloudKit:(id)a0 mobileAsset:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementMobileAsset:(id)a0;
- (id)copyWithReplacementCloudKit:(id)a0;
- (id)initWithCloudKit:(id)a0 mobileAsset:(id)a1;
- (BOOL)isEqualToAssets:(id)a0;

@end
