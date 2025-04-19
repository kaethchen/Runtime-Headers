@class NSString;
@protocol FCContentContext;

@interface FCAudioConfigurationOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultConfigString;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;

@end
