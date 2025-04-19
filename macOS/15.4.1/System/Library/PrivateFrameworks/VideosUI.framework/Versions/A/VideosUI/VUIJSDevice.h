@class NSString;

@interface VUIJSDevice : VUIJSObject <VUIJSDevice> {
    id _networkPropertiesChangedToken;
}

@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) BOOL runningAnInternalBuild;
@property (readonly, nonatomic) NSString *osBuildNumber;
@property (readonly, nonatomic) BOOL supportsSharedWatchPostPlayBinge;
@property (readonly, nonatomic) BOOL nativeDisplaysPlaybackModePrompt;

+ (BOOL)isSearchEnabled;
+ (id)getMobileGestaltString:(struct __CFString { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;

@end
