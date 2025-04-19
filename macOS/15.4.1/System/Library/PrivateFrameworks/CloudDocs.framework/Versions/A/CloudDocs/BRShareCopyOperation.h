@interface BRShareCopyOperation : BRShareOperation

@property (copy) id /* block */ shareCopyCompletionBlock;
@property (copy) id /* block */ rootShareCopyCompletionBlock;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)main;
- (id)initWithItemID:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end
