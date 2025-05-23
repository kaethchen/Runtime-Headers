@class NSOperationQueue, NSError, NSArray;
@protocol TLTimelineDataSourceProvider;

@interface TLTimelineSessionOperation : NSOperation

@property (readonly, copy, nonatomic) NSOperationQueue *operationQueue;
@property (copy) NSError *sessionError;
@property (readonly, nonatomic) id<TLTimelineDataSourceProvider> provider;
@property (readonly, copy, nonatomic) NSArray *operations;
@property (readonly, nonatomic) double providerTimeout;
@property (readonly, nonatomic) double operationTimeout;
@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ sessionCompletionBlock;

- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithProvider:(id)a0 operations:(id)a1 providerTimeout:(double)a2 operationTimeout:(double)a3;

@end
