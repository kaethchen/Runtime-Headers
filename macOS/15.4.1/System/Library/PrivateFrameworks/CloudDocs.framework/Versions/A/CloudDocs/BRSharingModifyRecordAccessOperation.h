@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BRShareOperation {
    NSURL *_fileURL;
    BOOL _allowAccess;
}

@property (copy) id /* block */ allowAccessCompletionBlock;
@property (copy) id /* block */ accessAllowedCompletionBlock;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0 allowAccess:(BOOL)a1;

@end
