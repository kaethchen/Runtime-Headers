@class NSMutableDictionary, NSArray, NSFilePromiseReceiver, NSURL, NSError, UINSDropFilePromisedReaderTemporaryDirectory, NSMutableArray;

@interface UINSDropFilePromiseReader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _lock_state;
    UINSDropFilePromisedReaderTemporaryDirectory *_lock_temporaryDropDir;
    NSURL *_lock_temporaryHostingDir;
    NSError *_lock_error;
    NSMutableArray *_lock_scheduledCallbacks;
    NSMutableDictionary *_lock_typeToHostedURL;
}

@property (readonly, nonatomic) NSFilePromiseReceiver *filePromiseReceiver;
@property (readonly, copy, nonatomic) NSArray *types;

- (void)dealloc;
- (void).cxx_destruct;
- (void)touch;
- (void)beginReceivingPromises;
- (void)cancelReceivePromises;
- (void)getFileOfType:(id)a0 completion:(id /* block */)a1;
- (id)initWithFilePromiseReceiver:(id)a0 temporaryDropDirectory:(id)a1;

@end
