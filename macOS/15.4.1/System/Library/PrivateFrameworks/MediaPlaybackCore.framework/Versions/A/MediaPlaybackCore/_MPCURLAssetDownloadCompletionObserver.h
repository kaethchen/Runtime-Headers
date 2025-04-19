@class AVURLAsset;

@interface _MPCURLAssetDownloadCompletionObserver : NSObject

@property (readonly, weak, nonatomic) AVURLAsset *asset;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)_downloadCompleteFailedNotification:(id)a0;
- (void)_downloadCompleteSuccessNotification:(id)a0;
- (void)_notifyCompletionHandlerWithSuccess:(BOOL)a0 error:(id)a1;

@end
