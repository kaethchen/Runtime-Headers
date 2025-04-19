@class NSArray, PKBundleComponent, NSString, PKBundleComponentVersion;

@interface PKFirmwareBundleComponent : NSObject

@property long long type;
@property (retain) NSArray *variants;
@property (retain) NSArray *models;
@property (retain) PKBundleComponent *bundle;
@property (readonly) NSString *bundlePath;
@property (readonly) PKBundleComponentVersion *bundleComponentVersion;
@property (retain) NSString *bridgeVersion;

+ (long long)typeForString:(id)a0;

- (void)dealloc;

@end
