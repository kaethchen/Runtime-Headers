@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)_postNotification;
- (void)_updateDefaults:(id)a0;
- (BOOL)registerNetworkDefaultsForAppID:(id)a0;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;

@end
