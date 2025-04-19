@class FCCurrentAudioContent;
@protocol FCContentContext;

@interface FCCurrentAudioContentFetchOperation : FCOperation {
    id<FCContentContext> _context;
    FCCurrentAudioContent *_resultCurrentContent;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)_promiseConfiguration;
- (id)_promiseContentWithConfiguration:(id)a0;
- (id)_promisePlaceholderContentWithConfiguration:(id)a0;

@end
