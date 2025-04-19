@class NSBundle, NSString, NSURL, BOSBundleComponentVersion;

@interface BOSUpdateBundle : NSObject

@property (retain) NSBundle *bundle;
@property (retain) NSURL *buildManifestURL;
@property (retain) BOSBundleComponentVersion *bundleVersion;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *buildVersion;
@property unsigned long long payloadArchiveSize;
@property (readonly) NSString *payloadArchivePath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBundleURL:(id)a0;

@end
