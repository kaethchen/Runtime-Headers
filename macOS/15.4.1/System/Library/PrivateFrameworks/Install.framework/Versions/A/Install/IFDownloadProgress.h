@class IFDownloadToken, NSMutableArray;

@interface IFDownloadProgress : NSObject {
    NSMutableArray *tokens;
    unsigned long long downloadedSize;
    unsigned long long totalExpectedSize;
    BOOL finished;
    long long initTime;
    unsigned long long totalDownloads;
    double currentSpeed;
    double averageSpeed;
    IFDownloadToken *currentDownload;
}

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addToken:(id)a0;
- (unsigned long long)downloadedSize;
- (double)averageSpeed;
- (double)currentSpeed;
- (void)_updateNetSpeed;
- (id)currentDownload;
- (unsigned long long)downloadsRemaining;
- (void)noteDownloadFinished:(id)a0;
- (void)noteDownloadProgress:(id)a0;
- (void)noteDownloadStarted:(id)a0;
- (unsigned long long)totalDownloads;
- (unsigned long long)totalExpectedSize;

@end
