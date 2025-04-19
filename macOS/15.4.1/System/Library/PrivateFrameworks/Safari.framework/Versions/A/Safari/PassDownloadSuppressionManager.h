@interface PassDownloadSuppressionManager : DisruptiveUISuppressionManager

@property (readonly, nonatomic) BOOL isRequestQueueIsFull;

- (void)reset;
- (id)_dequeuePassDownloadRequest;
- (void)enqueuePassDownload:(id)a0;
- (void)handleNextPassDownload;
- (void)showQueuedPassFromDownload:(id)a0;

@end
