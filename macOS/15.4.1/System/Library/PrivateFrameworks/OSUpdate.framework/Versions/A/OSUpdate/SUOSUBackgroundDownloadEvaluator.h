@class NSSet;

@interface SUOSUBackgroundDownloadEvaluator : NSObject

@property (readonly) BOOL backgroundDownloadsEnabled;
@property (readonly) NSSet *productKeysToAutoInstall;

- (void).cxx_destruct;
- (BOOL)_enabledForAutoInstallTonight:(id)a0;
- (BOOL)_isProductEligibleForBackgroundDownload:(id)a0;
- (id)backgroundDownloadEligibleProductFromProduct:(id)a0 majorProduct:(id)a1;
- (id)initWithBackgroundDownloadsEnabled:(BOOL)a0 productKeysToAutoInstall:(id)a1;

@end
