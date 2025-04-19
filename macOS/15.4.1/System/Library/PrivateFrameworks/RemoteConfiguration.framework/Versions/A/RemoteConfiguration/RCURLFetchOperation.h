@class NSData, NSString, NSURL, NSError, NSNumber, RCBackgroundFetchConfiguration, NSDictionary, RCNetworkActivity, NSObject, NSURLSessionTask, NSHTTPURLResponse;
@protocol OS_dispatch_queue;

@interface RCURLFetchOperation : RCOperation <NSURLSessionTaskDelegate>

@property (retain) NSURLSessionTask *requestTask;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSData *responseData;
@property (retain, nonatomic) NSString *requestUUID;
@property (nonatomic) double taskStartTime;
@property (retain, nonatomic) NSString *responseMIMEType;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (nonatomic) unsigned long long responseSize;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *maxAge;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSData *HTTPBody;
@property (retain, nonatomic) NSString *HTTPMethod;
@property (retain, nonatomic) RCBackgroundFetchConfiguration *backgroundFetchConfiguration;
@property (copy, nonatomic) NSString *loggingKey;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) double URLRequestTimeoutDuration;
@property (copy, nonatomic) id /* block */ configurationCompletionHandler;
@property (copy, nonatomic) id /* block */ configurationDictionaryCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (copy, nonatomic) id /* block */ networkEventHandler;
@property (retain, nonatomic) RCNetworkActivity *networkActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 didCreateTask:(id)a1;
- (void)setRelativePriority:(long long)a0;
- (void)performOperation;
- (void)_reportNetworkEventsForTask:(id)a0 response:(id)a1 error:(id)a2;
- (void)operationWillFinishWithError:(id)a0;
- (void)resetForRetry;
- (BOOL)validateOperation;

@end
