@class NSOperation;

@interface FPProgress : NSProgress {
    NSOperation *_operation;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOperation:(id)a0;

@end
