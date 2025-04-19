@class NSString, NSTimer, PKDownloaderQueue, PKDownloaderSpeedTracker;

@interface PKDownloader : NSObject {
    PKDownloaderQueue *_queue;
    BOOL _isQueueRunning;
    BOOL _stopNotificationPending;
    PKDownloaderSpeedTracker *_downloadTracker;
    PKDownloaderSpeedTracker *_checksumTracker;
    NSTimer *_progressTimer;
    NSString *_lastKnownPeerAddress;
}

@property (weak) id delegate;
@property long long maxConcurrentDownloadCount;
@property BOOL downloadInBackground;
@property (copy, nonatomic) id /* block */ loggingBlock;

+ (void)setUserAgent:(id)a0;
+ (id)userAgent;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (double)estimatedTimeRemaining;
- (void)download:(id)a0 didFailWithError:(id)a1;
- (void)download:(id)a0 didReceiveDataOfLength:(unsigned long long)a1;
- (void)download:(id)a0 didReceiveResponse:(id)a1;
- (id)download:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)downloadDidFinish:(id)a0;
- (void)__runBlock:(id /* block */)a0;
- (void)_runBlockOnThread:(id)a0 withBlock:(id /* block */)a1 waitUntilDone:(BOOL)a2;
- (void)cancelDownloadWithPackageReference:(id)a0;
- (unsigned long long)completedDownloadSize;
- (BOOL)isQueueRunning;
- (double)progressValue;
- (void)queuePackageReference:(id)a0 destination:(id)a1;
- (void)startQueue;
- (void)stopQueue;
- (unsigned long long)totalDownloadSize;
- (BOOL)_cancelDownloadCapturingResumeData:(id)a0;
- (void)_element:(id)a0 didFailWithError:(id)a1;
- (void)_elementDidFinish:(id)a0;
- (void)_finishFileCopyWithResult:(id)a0;
- (void)_notifyDelegateIfQueueStopped:(id)a0;
- (id)_peerAddressForURLResponse:(id)a0;
- (void)_postProcessDownloadWithElement:(id)a0 isValid:(BOOL)a1;
- (void)_startChecksumValidationForDownload:(id)a0 returningOnThread:(id)a1;
- (void)_startDownloadForQueueElement:(id)a0;
- (void)_startFileCopyForQueueElement:(id)a0;
- (void)_startNativeValidationForDownload:(id)a0 returningOnThread:(id)a1;
- (void)_startQueuedDownloads;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_updateDownloadSpeed;
- (void)_updateIndicators:(id)a0;
- (void)_updateProgressInfo;
- (BOOL)_validatePackageAtPath:(id)a0;
- (void)clearQueue;
- (void)download:(id)a0 didCheckDataOfLength:(unsigned long long)a1;
- (void)download:(id)a0 didReceiveChallenge:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)download:(id)a0 receiveLogWithLevel:(unsigned long long)a1 withLogMesage:(id)a2;
- (void)download:(id)a0 receivedResumeBytesOfLength:(long long)a1;
- (void)download:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (BOOL)isQueueEmpty;
- (BOOL)queueContainsPackageReference:(id)a0;
- (void)setIsQueueRunning:(BOOL)a0;

@end
