@class NSString, NSDictionary, NSXPCConnection, NSURL, NSObject;

@interface USVideoUsage : NSObject {
    long long _currentState;
    NSObject *_stateLock;
}

@property (readonly) NSXPCConnection *xpcConnection;
@property (copy) NSDictionary *videoMetadata;
@property (readonly) BOOL usageTrusted;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *profileIdentifier;
@property (readonly, copy) NSString *uniqueIdentifier;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *mediaURL;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)stop;
- (void)restart;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 mediaURL:(id)a2 videoMetadata:(id)a3;
- (void)updateVideoMetadata:(id)a0;
- (void)_stopVideoUsage;
- (BOOL)_shouldRecordUsageForVideoWithMetadata:(id)a0;
- (void)_startVideoUsage;
- (void)_usVideoUsageCommonInitWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 URL:(id)a2 mediaURL:(id)a3 videoMetadata:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 mediaURL:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 videoMetadata:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 URL:(id)a2;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 URL:(id)a2 mediaURL:(id)a3;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 URL:(id)a2 mediaURL:(id)a3 videoMetadata:(id)a4;
- (id)initWithBundleIdentifier:(id)a0 profileIdentifier:(id)a1 URL:(id)a2 videoMetadata:(id)a3;

@end
