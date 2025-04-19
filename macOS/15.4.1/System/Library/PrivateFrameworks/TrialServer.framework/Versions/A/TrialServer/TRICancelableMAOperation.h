@class _PASLock;

@interface TRICancelableMAOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)setCurrentAsset:(id)a0;
- (void)addSemaphore:(id)a0;

@end
