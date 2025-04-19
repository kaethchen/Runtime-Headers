@class NSData, NSError, NSURLSessionTaskMetrics, NSURLSession, NSDictionary, AMSURLRequestProperties, NSURLSessionTask, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSMetricsLoadURLContext : NSObject

@property (retain) NSDictionary *decodedResponseBody;
@property (retain) AMSURLRequestProperties *properties;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSError *error;
@property (retain) AMSProcessInfo *processInfo;
@property (retain) NSData *responseBody;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionTask *task;
@property (retain) NSURLSessionTaskMetrics *taskMetrics;
@property (readonly, copy) NSDictionary *metricsOverlay;

- (void).cxx_destruct;
- (id)initWithTaskInfo:(id)a0 serverPayload:(id)a1;
- (void)setBagContract:(id)a0;
- (id)bagContract;
- (id)initWithTask:(id)a0 metrics:(id)a1;
- (id)metricsDictionaryPromise;

@end
