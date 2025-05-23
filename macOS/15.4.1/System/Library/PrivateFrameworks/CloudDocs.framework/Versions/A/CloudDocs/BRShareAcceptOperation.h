@class NSURL;

@interface BRShareAcceptOperation : BROperation {
    NSURL *_shareLink;
}

@property (copy) id /* block */ shareAcceptCompletionBlock;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithShareLink:(id)a0;

@end
