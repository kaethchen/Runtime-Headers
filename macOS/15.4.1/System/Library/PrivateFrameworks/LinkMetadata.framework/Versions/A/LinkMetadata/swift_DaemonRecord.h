@class NSString, NSArray;

@interface swift_DaemonRecord : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ attributionBundleIdentifier;
    void /* unknown type, empty encoding */ metadataURLs;
}

@property (class, nonatomic, readonly) NSString *daemonFilePath;
@property (class, nonatomic, copy) NSArray *enumerated;

@property (nonatomic, copy) NSString *bundleIdentifier;

+ (id)fromBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
