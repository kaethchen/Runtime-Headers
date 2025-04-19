@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncBlockOperation : MSVAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _cancellationHandler;
}

@property (readonly, copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)a0;
- (id)initWithStartHandler:(id /* block */)a0;

@end
