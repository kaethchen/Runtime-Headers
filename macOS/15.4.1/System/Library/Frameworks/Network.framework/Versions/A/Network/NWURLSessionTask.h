@class NSDictionary, NSURLRequest, NWURLSessionDelegateWrapper, NWURLError, NSURLSessionTaskTransactionMetrics, NSMutableArray, NSString, NWURLSessionRequestBodyInfo, NWURLSessionTaskMetrics, NSArray, NSMutableDictionary, NSURLSessionTask, NWURLSession, NWURLSessionMultipartParser, NSObject, NWURLSessionTaskConfiguration, NSData, NSURLSessionTaskMetrics, NSURLSessionDataTask, NSURLResponse, NSURL, NSProgress, NSDate;
@protocol NWURLSessionResponseConsumer, NSURLSessionTaskDelegate, NWURLLoader, OS_nw_context, OS_nw_activity, OS_dispatch_queue, OS_nw_endpoint, OS_nw_protocol_metadata, OS_nw_array, OS_sec_protocol_metadata, OS_nw_http_cookie_storage;

@interface NWURLSessionTask : NSObject <NWURLLoaderClient, NWRedactedDescription, NSCopying, NSProgressReporting> {
    BOOL _suspended;
    BOOL _pendingRead;
    BOOL _progressReportingFinished;
    BOOL _defaultUploadProgressState;
    BOOL _defaultDownloadProgressState;
    BOOL _performingServerTrustCallback;
    BOOL _lastServerTrustVerifyResult;
    BOOL _explicitlySetCookieStorage;
    BOOL _disabledCredentialStorage;
    NSObject<OS_nw_array> *_h1FallbackCache;
    NSMutableDictionary *_appssoH1FallbackHeaders;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSProgress *_progress;
    long long _countOfBytesSent;
    long long _countOfBytesReceived;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NWURLError *_error;
    NSArray *__resolvedCNAMEChain;
    NSDictionary *__trailers;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_publicDelegateWrapper;
    NWURLSessionDelegateWrapper *_internalDelegateWrapper;
    NSObject<OS_nw_protocol_metadata> *_clientMetadataForMetrics;
    id<NWURLLoader> _loader;
    NWURLSessionMultipartParser *_multipartParser;
    unsigned long long _redirectCount;
    long long _internalState;
    id /* block */ _pendingUpload;
    id /* block */ _HTTPConnectionInfoHandler;
    NSObject<OS_nw_context> *_sessionContext;
    void *_resourceTimeoutTimer;
    double _timeoutIntervalForRequest;
    void *_requestTimeoutTimer;
    void *_startTimeoutTimer;
    void *_payloadTimeoutTimer;
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    NSData *_backtrace;
    NSMutableArray *_serverTrustCallbackQueue;
    NSObject<OS_sec_protocol_metadata> *_lastSecProtocolMetadata;
    NWURLSession *_session;
    NWURLSessionTaskConfiguration *_configuration;
    NWURLSessionRequestBodyInfo *_requestBody;
    id<NWURLSessionResponseConsumer> _responseConsumer;
    NSObject<OS_nw_http_cookie_storage> *_cookieStorage;
    NWURLSessionTaskMetrics *_metrics;
}

@property (readonly, nonatomic) unsigned long long taskIdentifier;
@property (readonly, copy, nonatomic) NSURLRequest *originalRequest;
@property (readonly, copy, nonatomic) NSURLRequest *currentRequest;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (retain) id<NSURLSessionTaskDelegate> delegate;
@property (readonly, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSDate *earliestBeginDate;
@property (nonatomic) long long countOfBytesClientExpectsToSend;
@property (nonatomic) long long countOfBytesClientExpectsToReceive;
@property (readonly, nonatomic) long long countOfBytesSent;
@property (readonly, nonatomic) long long countOfBytesReceived;
@property (readonly, nonatomic) long long countOfBytesExpectedToSend;
@property (readonly, nonatomic) long long countOfBytesExpectedToReceive;
@property (copy) NSString *taskDescription;
@property (readonly) long long state;
@property (readonly, copy) NWURLError *error;
@property (nonatomic) struct __SecTrust { } *secTrust;
@property float priority;
@property BOOL prefersIncrementalDelivery;
@property (retain, nonatomic) id<NSURLSessionTaskDelegate> _internalDelegate;
@property (nonatomic) BOOL _callCompletionHandlerInline;
@property (nonatomic) BOOL _keepDownloadTaskFile;
@property (retain, nonatomic) NSObject<OS_nw_activity> *_nw_activity;
@property (readonly) NSURLSessionTaskMetrics *_incompleteTaskMetrics;
@property (readonly) NSURLSessionTaskTransactionMetrics *_incompleteCurrentTaskTransactionMetrics;
@property (copy, nonatomic) NSString *_pathToDownloadTaskFile;
@property (copy, nonatomic) NSString *_storagePartitionIdentifier;
@property (copy, nonatomic) NSURL *_siteForCookies;
@property (nonatomic) BOOL _isTopLevelNavigation;
@property (nonatomic) BOOL _preconnect;
@property (copy, nonatomic) id /* block */ _cookieTransformCallback;
@property (readonly) NSArray *_resolvedCNAMEChain;
@property long long _bytesPerSecondLimit;
@property (nonatomic) double _timeoutIntervalForResource;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *_hostOverride;
@property (readonly) long long _countOfBytesReceivedEncoded;
@property (readonly) NSDictionary *_trailers;
@property (readonly, nonatomic) struct { unsigned char sessionUUID[16]; unsigned int taskID; } logDescription;
@property (readonly, nonatomic) NSURLSessionTask *loaderTask;
@property (readonly, nonatomic) NSURLSessionDataTask *loaderDataTask;
@property (readonly, nonatomic) NSObject<OS_nw_protocol_metadata> *clientMetadata;
@property (readonly, nonatomic) void *joiningContext;
@property (readonly, nonatomic) NSObject<OS_nw_context> *networkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *redactedDescription;

+ (BOOL)isSubclassOfClass:(Class)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)_adoptEffectiveConfiguration:(id)a0;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (id)_timingData;
- (void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(id /* block */)a0;
- (void)completeTaskWithError:(id)a0;
- (id)errorWithResumeData:(id)a0;
- (void)loaderBetterPathAvailable;
- (void)loaderConnectedWithHTTPConnectionMetadata:(id)a0 CNAMEChain:(id)a1 unlistedTracker:(id)a2;
- (void)loaderDidReceiveChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)loaderDidReceiveClientCertificateChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (void)loaderDidReceiveInformationalResponse:(id)a0;
- (void)loaderDidReceiveServerTrustChallenge:(id)a0 secProtocolMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)loaderDidSendBodyData:(long long)a0 totalBytesSent:(long long)a1 totalBytesExpectedToSend:(long long)a2 completionHandler:(id /* block */)a3;
- (void)loaderFailedToConnect:(id)a0;
- (void)loaderNeedsBodyProviderFromOffset:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)loaderPreparingConnection;
- (void)loaderRunDelegateBlock:(id /* block */)a0;
- (void)loaderWaitingForConnectivity;
- (void)loaderWillPerformHSTSUpgrade:(BOOL)a0;
- (void)loaderWillPerformHTTPRedirection:(id)a0 newRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)startNextLoad:(BOOL)a0;

@end
