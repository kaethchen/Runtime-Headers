@class NSURL, NSOperationQueue, NSURLSession;

@interface WBSWellKnownURLResponseCodeReliabilityChecker : NSObject {
    NSURL *_url;
    NSOperationQueue *_fetchOperationQueue;
    NSURLSession *_session;
    id /* block */ _completion;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)cancel;
- (void)checkReliabilityWithCompletion:(id /* block */)a0;

@end
