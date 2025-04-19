@class NSURL;

@interface BRFileProvidingOperation : BROperation {
    NSURL *_url;
    unsigned long long _readingOptions;
}

@property (nonatomic) BOOL wantsCurrentVersion;
@property (copy, nonatomic) id /* block */ fileProvidingCompletion;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0 readingOptions:(unsigned long long)a1;

@end
