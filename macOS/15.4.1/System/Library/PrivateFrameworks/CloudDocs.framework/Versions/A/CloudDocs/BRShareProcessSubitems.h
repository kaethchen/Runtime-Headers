@interface BRShareProcessSubitems : BRShareOperation {
    unsigned long long _processType;
}

@property (copy) id /* block */ processSubitemsCompletionBlock;
@property (nonatomic) unsigned long long maxSharedSubitemsBeforeFailure;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0 processType:(unsigned long long)a1;

@end
