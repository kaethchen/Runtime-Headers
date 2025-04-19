@class NSMutableData, GraphAPIBinding, NSConditionLock, GraphAPIBaseRequest, NSError, NSData, NSString;
@protocol GraphAPIBindingTaskDelegate;

@interface GraphAPIBindingTask : NSObject {
    NSMutableData *_loggingData;
    NSMutableData *_responseData;
    int _retryCount;
}

@property (retain, nonatomic) NSConditionLock *finishedConditionLock;
@property (retain, nonatomic) NSError *error;
@property (weak) id<GraphAPIBindingTaskDelegate> delegate;
@property (copy) id /* block */ completionHandler;
@property (weak) GraphAPIBinding *binding;
@property (retain) GraphAPIBaseRequest *request;
@property (readonly, copy) NSData *requestData;
@property (retain) id graphAPIResponse;
@property BOOL logActivity;
@property double timeout;
@property (copy, nonatomic) NSString *clientRequestID;
@property (retain, nonatomic) NSString *nextLink;

- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)start;
- (void)cancel;
- (void)handleData:(id)a0;
- (void)completeWithResponse:(id)a0;
- (id)runSynchronously:(id *)a0;
- (BOOL)shouldRetryForOAuthTokenRefreshWithError:(id)a0;
- (BOOL)hasRawResponse;

@end
