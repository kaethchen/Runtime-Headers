@interface WalletOrderDownloadSuppressionManager : DisruptiveUISuppressionManager

@property (readonly, nonatomic) BOOL isRequestQueueIsFull;

- (void)reset;
- (id)_dequeueWalletOrderDownloadRequest;
- (void)enqueueWalletOrderDownload:(id)a0;
- (void)handleNextWalletOrderDownload;
- (void)showQueuedWalletOrderFromDownload:(id)a0;

@end
