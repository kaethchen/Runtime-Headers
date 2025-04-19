@class NSMutableArray, WDCommandRequest;

@interface WDSessionQueueState : NSObject

@property (readonly, nonatomic) WDCommandRequest *currentRequest;
@property (readonly, nonatomic) NSMutableArray *queuedRequests;
@property (nonatomic) BOOL acceptsRequests;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueRequest:(id)a0;
- (id)dequeueNextRequest;
- (void)finishCurrentRequest;

@end
