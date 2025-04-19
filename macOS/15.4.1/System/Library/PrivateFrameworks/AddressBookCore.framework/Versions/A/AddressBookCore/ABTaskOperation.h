@class ABTask;

@interface ABTaskOperation : NSOperation {
    ABTask *_task;
}

@property (copy) id /* block */ taskCompletionBlock;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (id)initWithTask:(id)a0;
- (void)callCompletionBlockWithCancelledError;

@end
