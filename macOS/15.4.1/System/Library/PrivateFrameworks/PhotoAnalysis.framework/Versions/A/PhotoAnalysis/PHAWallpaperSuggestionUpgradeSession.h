@class VCPMediaAnalysisService, NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PHAWallpaperSuggestionUpgradeSession : NSObject {
    VCPMediaAnalysisService *_mediaAnalysisService;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_upgradeSessions;
}

- (id)init;
- (void).cxx_destruct;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
