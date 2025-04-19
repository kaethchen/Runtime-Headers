@class NSMutableArray, NSMutableDictionary;

@interface PKDownloaderQueue : NSObject {
    unsigned long long _maxConcurrentDownloadCount;
    NSMutableArray *_queue;
    NSMutableDictionary *_active;
    unsigned long long _totalSizeQueued;
    unsigned long long _sizeDequeued;
    unsigned long long _sizeDownloaded;
    unsigned long long _sizeToDownload;
    unsigned long long _sizeToCheck;
    unsigned long long _dequeuedProgressIncrement;
    double _progressDerating;
    double _progressPercentage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void)addElement:(id)a0;
- (double)progressPercentage;
- (void)setMaxConcurrentDownloadCount:(long long)a0;
- (id)allElements;
- (void)checkedDataOfLength:(unsigned long long)a0 forElement:(id)a1;
- (unsigned long long)totalSizeQueued;
- (void)_adjustQueueSizeBy:(long long)a0;
- (id)activateNextElement;
- (id)activeElementForURL:(id)a0;
- (id)activeElements;
- (void)clearAll;
- (void)deactivateElement:(id)a0;
- (void)gotDataOfLength:(unsigned long long)a0 forElement:(id)a1;
- (long long)maxConcurrentDownloadCount;
- (void)removeElement:(id)a0 didFinish:(BOOL)a1;
- (void)revertElement:(id)a0 keepActive:(BOOL)a1;
- (unsigned long long)sizeDownloaded;
- (unsigned long long)sizeToCheck;
- (unsigned long long)sizeToDownload;
- (void)updateProgressInfo;

@end
