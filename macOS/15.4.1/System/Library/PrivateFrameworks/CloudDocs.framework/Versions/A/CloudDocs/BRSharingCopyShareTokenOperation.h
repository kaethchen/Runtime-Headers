@class NSURL;

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shareTokenCompletionBlock;
@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)main;
- (id)initWithItemID:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end
