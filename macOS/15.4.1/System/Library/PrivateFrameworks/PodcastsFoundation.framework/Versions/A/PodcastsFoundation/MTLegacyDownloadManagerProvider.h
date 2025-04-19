@class MTLegacyDownloadNotifier;
@protocol MTBackgroundURLSessionEventsHandler, MTLegacyDownloadDataSource, MTLegacyDownloadManagerProtocol, MTURLSessionInvalidator;

@interface MTLegacyDownloadManagerProvider : MTSingleton

@property (retain, nonatomic) id<MTLegacyDownloadManagerProtocol, MTLegacyDownloadDataSource, MTBackgroundURLSessionEventsHandler, MTURLSessionInvalidator> downloads;
@property (retain, nonatomic) MTLegacyDownloadNotifier *notifier;

- (void).cxx_destruct;
- (id)downloadManager;
- (id)downloadManagerIfSetup;
- (id)downloadsNotifier;
- (void)setupWith:(id)a0 downloadsNotifier:(id)a1;

@end
