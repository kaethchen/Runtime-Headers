@class NSString, NSMutableArray, NSConditionLock;

@interface IFDownloadManager : NSObject {
    BOOL runDownloadQueue;
    NSString *downloadsDirectory;
    NSConditionLock *downloadQLock;
    NSMutableArray *downloadQueue;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *downloadQueuePthread;
    BOOL runUploadQueue;
    NSConditionLock *uploadQLock;
    NSMutableArray *uploadQueue;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *uploadQueuePthread;
}

+ (id)sharedManager;
+ (void)registerToken:(id)a0;

- (void)dealloc;
- (id)init;
- (void)_downloadItem:(id)a0;
- (void)_downloadProcessing;
- (id)_findProxyFor:(id)a0;
- (void)_uploadFileProcessing;
- (void)_uploadQueryProcessing;
- (void)downloadItem:(id)a0;
- (void)uploadItem:(id)a0;

@end
