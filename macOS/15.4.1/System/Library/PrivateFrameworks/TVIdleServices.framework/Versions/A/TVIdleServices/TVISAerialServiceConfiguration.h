@class NSString, NSDictionary, NSSet, NSDate, NSURL;

@interface TVISAerialServiceConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *configPlist;
@property (retain, nonatomic) NSDate *configPlistValidUntilDate;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) NSSet *supportedVariants;
@property (retain, nonatomic) NSString *activeAssetVariant;
@property (readonly, nonatomic) long long remoteAssetDownloadInterval;
@property (readonly, nonatomic) NSURL *remoteResourceURL;
@property (readonly, nonatomic) NSURL *localManifestURL;
@property (readonly, nonatomic) NSURL *localResourceURL;
@property (readonly, nonatomic) NSURL *localizedStringsBundleURL;
@property (readonly, nonatomic) NSURL *localCacheBaseURL;
@property (readonly, nonatomic) NSURL *localCacheURLForActiveAssetVariant;

+ (id)customerAssetsServiceConfiguration;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMode:(id)a0 localCacheBaseURL:(id)a1;
- (id)localBurnInMatrixFile:(long long)a0;
- (id)localCacheURLForAssetVariant:(id)a0;
- (id)localizedStringsBundle;

@end
