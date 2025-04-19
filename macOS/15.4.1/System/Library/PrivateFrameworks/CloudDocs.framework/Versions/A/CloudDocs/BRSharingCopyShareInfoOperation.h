@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ copyShareInfoCompletionBlock;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end
