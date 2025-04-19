@class NSString, NSURLSessionDataTask, NSObject;
@protocol OS_dispatch_queue;

@interface APConfigurationRequester : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (retain, nonatomic) NSURLSessionDataTask *sessionDataTask;
@property (readonly, nonatomic) NSString *storefront;
@property (nonatomic) BOOL cancelled;

- (void).cxx_destruct;
- (void)cancelRequest;
- (id)initWithStorefront:(id)a0;
- (id)_queryItems;
- (long long)_configurationVersion;
- (void)_httpResponse:(id)a0 session:(id)a1;
- (id)_requestHost;
- (void)_runCompletionHandlerWithSuccess:(BOOL)a0 data:(id)a1;
- (void)_sendCoreAnalyticsWithUpdateStatus:(long long)a0 version:(long long)a1;
- (BOOL)_testingFlag;
- (void)requestConfigurationWithCompletionHandler:(id /* block */)a0;

@end
