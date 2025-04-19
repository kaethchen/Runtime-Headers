@class NSString, NSURL;

@interface CWFAssetLocal : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetSpecifier;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSString *firstSupportedBuild;
@property (readonly, nonatomic) NSString *lastSupportedBuild;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSString *assetID;

+ (id)assetIDFromLocalURL:(id)a0;
+ (char)compareAssetVersion:(id)a0 withVersion:(id)a1;
+ (char)compareOSRestoreVersion:(id)a0 withVersion:(id)a1;
+ (char)compareSUCoreRestoreVersion:(id)a0 withVersion:(id)a1;
+ (BOOL)isValidAssetVersion:(id)a0;
+ (BOOL)isValidOSVersion:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1 assetVersion:(id)a2 attributes:(id)a3 localURL:(id)a4;
- (BOOL)sanityCheckOSRestoreVersion:(id)a0;
- (BOOL)sanityCheckSKUVersion:(id)a0;

@end
