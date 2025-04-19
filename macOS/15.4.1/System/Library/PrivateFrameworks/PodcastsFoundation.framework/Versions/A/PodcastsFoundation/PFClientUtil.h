@class NSString;

@interface PFClientUtil : NSObject

@property (class, readonly, nonatomic) NSString *bagProfileName;
@property (class, readonly, nonatomic) NSString *bagProfileVersion;
@property (class, readonly, nonatomic) BOOL isRunningOnInternalOS;
@property (class, readonly, nonatomic) BOOL isRunningOnDesktop;
@property (class, readonly, nonatomic) BOOL isRunningOnWatch;
@property (class, readonly, nonatomic) BOOL isUnitTesting;
@property (class, readonly, nonatomic) BOOL supportsDownloads;
@property (class, readonly, nonatomic) BOOL supportsLocalLibrary;
@property (class, readonly, nonatomic) BOOL supportsImageStore;
@property (class, readonly, nonatomic) BOOL supportsGUI;
@property (class, readonly, nonatomic) BOOL supportsShowLockup;

+ (id)clientIdentifier;
+ (id)clientBundleVersion;
+ (BOOL)supportsMetrics;
+ (id)clientIdentifierHeader;
+ (BOOL)isAppRemovalService;
+ (BOOL)isPodcastsApp;
+ (BOOL)isPodcastsKit;
+ (BOOL)isRunningOnHomepod;
+ (BOOL)isRunningOnTV;
+ (BOOL)isRunningOnVisionOS;
+ (id)mediaApiClientIdentifier;
+ (id)mediaApiClientVersion;
+ (BOOL)platformSupportsVideo;

@end
