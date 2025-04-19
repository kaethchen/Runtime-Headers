@class _PASLock;

@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) BOOL isCanceled;

- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (void)cancel;
- (id)initWithOperation:(id)a0;

@end
