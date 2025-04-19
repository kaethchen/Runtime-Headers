@class NSString, NSMutableArray, LPFetcherConfiguration;

@interface LPFetcherGroup : NSObject {
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    id /* block */ _completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    BOOL _cancelled;
    NSString *_description;
}

@property (readonly, nonatomic) unsigned int loggingID;

- (void).cxx_destruct;
- (void)cancel;
- (void)_completed;
- (void)prependFetcher:(id)a0;
- (void)_addFetcher:(id)a0 atIndex:(unsigned long long)a1;
- (id)_responsesRespectingPolicy;
- (void)appendFetcher:(id)a0;
- (void)doneAddingFetchers;
- (void)evaluateCompleteness;
- (id)initWithPolicy:(long long)a0 configuration:(id)a1 description:(id)a2 completionHandler:(id /* block */)a3;
- (unsigned long long)numberOfActiveFetches;
- (void)startFetchesIfNeeded;

@end
