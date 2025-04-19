@class NSString, NSMutableDictionary, NSImage;

@interface IAApplication : NSObject {
    NSImage *_image;
}

@property (retain) NSString *bundleID;
@property (retain) NSString *displayName;
@property (retain) NSString *imagePath;
@property (retain) NSMutableDictionary *userInfo;
@property (readonly) NSImage *image;
@property BOOL enabled;
@property BOOL alreadyEnabled;

+ (id)appWithBundleID:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;
- (id)associatedPluginID;
- (id)associatedProviderID;
- (id)displayNameForData;
- (long long)sortValue;

@end
