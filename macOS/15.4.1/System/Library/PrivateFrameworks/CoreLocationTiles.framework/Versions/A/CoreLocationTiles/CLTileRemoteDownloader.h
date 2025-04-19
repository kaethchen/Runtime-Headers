@class NSObject;
@protocol OS_dispatch_queue;

@interface CLTileRemoteDownloader : NSObject {
    struct unique_ptr<CLConnection, CLConnectionDeleter> { struct __compressed_pair<CLConnection *, CLConnectionDeleter> { struct CLConnection *__value_; } __ptr_; } _connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ onDownloadAndDecompression;
@property (nonatomic) BOOL canDownloadOverCellular;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)setup;
- (void)handleDisconnection;
- (BOOL)downloadAndDecompressFrom:(const char *)a0 toDecompressedDestination:(const char *)a1 withTimeout:(double)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithConnection:(struct unique_ptr<CLConnection, CLConnectionDeleter> { struct __compressed_pair<CLConnection *, CLConnectionDeleter> { struct CLConnection *x0; } x0; })a0 onQueue:(id)a1;
- (id)initWithQueue:(id)a0 canDownloadOverCellular:(BOOL)a1;

@end
