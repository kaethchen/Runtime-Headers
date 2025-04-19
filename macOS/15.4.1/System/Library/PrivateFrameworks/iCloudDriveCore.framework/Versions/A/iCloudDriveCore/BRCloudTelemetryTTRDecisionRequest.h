@class NSMutableData, NSString, APSConnection, NSURL, NSData, NSObject, NSURLSessionDataTask;
@protocol OS_dispatch_queue;

@interface BRCloudTelemetryTTRDecisionRequest : NSObject <C2RequestDelegate> {
    NSObject<OS_dispatch_queue> *_apsQueue;
    APSConnection *_apsConnection;
    BOOL _useDecisionServer;
    NSURL *_decisonServerURL;
    NSString *_senderID;
    NSString *_ruleID;
    NSData *_publicToken;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_responseBody;
    id /* block */ _completionHandler;
}

@property (weak, nonatomic) NSObject *networkingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithSenderID:(id)a0 ruleID:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)resume;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (id)_initWithSenderID:(id)a0 ruleID:(id)a1 completionHandler:(id /* block */)a2;

@end
