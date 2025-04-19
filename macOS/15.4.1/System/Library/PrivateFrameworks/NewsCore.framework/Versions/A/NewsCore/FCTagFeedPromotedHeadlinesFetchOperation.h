@class FCCloudContext, NSString, NSArray;
@protocol FCCoreConfiguration;

@interface FCTagFeedPromotedHeadlinesFetchOperation : FCOperation {
    id<FCCoreConfiguration> _configuration;
    FCCloudContext *_cloudContext;
    NSString *_tagID;
    double _expireAfterTimeWindow;
    NSArray *_resultHeadlines;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)initWithConfiguration:(id)a0 cloudContext:(id)a1 tagID:(id)a2 expireAfterTimeWindow:(double)a3;

@end
