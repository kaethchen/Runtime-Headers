@class NSString;

@interface _LTDAnalyticsAssetSnapshot : NSObject

@property (readonly, copy, nonatomic) NSString *assetBuild;
@property (readonly, copy, nonatomic) NSString *expectedAssetVersion;
@property (readonly, copy, nonatomic) NSString *installedAssetVersion;
@property (readonly, nonatomic) BOOL hasAllData;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAssetBuild:(id)a0 expectedAssetVersion:(id)a1 installedAssetVersion:(id)a2;

@end
