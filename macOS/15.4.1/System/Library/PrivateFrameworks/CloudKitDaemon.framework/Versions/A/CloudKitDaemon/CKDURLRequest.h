@class NSDictionary, NSNumber, NSURLRequest, NSURLSession, NSURL, NSString, NSMutableSet, NSError, CKRoughlyEquivalentProperties, CKDContainer, CKTapToRadarRequest, NSArray, NSMutableDictionary, CKTestRequestProperties, CKDProtobufStreamWriter, NSObject, NSInputStream, NSData, CKDResponseBodyParser, NSURLSessionDataTask, C2RequestOptions, NSHTTPURLResponse, CKDOperation, NSDate, CKDProtocolTranslator, CKSignpost, CKDOperationMetrics;
@protocol OS_os_activity, C2NetworkingDelegate, OS_voucher, OS_dispatch_queue;

@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter, CKRoughlyEquivalent> {
    BOOL _didSendRequest;
    BOOL _didFinishLoading;
    BOOL _finished;
    BOOL _didRetrySignature;
    NSData *_fakeResponseData;
    BOOL _haveParsedFakeResponseData;
    NSObject<OS_os_activity> *_osActivity;
    NSObject<OS_os_activity> *_transmissionActivity;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleQueue;
@property (retain) NSURLSessionDataTask *urlSessionTask;
@property (retain) C2RequestOptions *requestOptions;
@property (retain, nonatomic) id<C2NetworkingDelegate> c2NetworkingDelegate;
@property (copy) NSURLRequest *request;
@property (retain) NSHTTPURLResponse *response;
@property (retain) NSError *error;
@property (retain) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableSet *responseObjectUUIDs;
@property (copy, nonatomic) NSString *deviceID;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) BOOL didRetryAuth;
@property (retain, nonatomic) NSError *lastRetryAuthError;
@property (getter=isCancelled) BOOL cancelled;
@property (nonatomic) BOOL haveCachedServerType;
@property (nonatomic) BOOL haveCachedPartitionType;
@property (nonatomic) long long cachedServerType;
@property (nonatomic) long long cachedPartitionType;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (retain) NSDate *dateRequestWentOut;
@property (retain, nonatomic) CKDOperationMetrics *metrics;
@property (retain, nonatomic) NSDictionary *timingData;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (retain, nonatomic) NSString *cloudKitAuthToken;
@property (retain, nonatomic) NSString *iCloudAuthToken;
@property (nonatomic) BOOL didReceiveResponseBodyData;
@property (copy, nonatomic) NSString *serverProvidedAutoBugCaptureReason;
@property (retain, nonatomic) CKTapToRadarRequest *serverProvidedTapToRadarRequest;
@property (retain, nonatomic) NSMutableDictionary *countsByRequestOperationType;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (readonly, nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (readonly, nonatomic) unsigned long long duetPreClearedMode;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) NSString *operationIDForProtobuf;
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantity;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) CKSignpost *signpost;
@property (readonly, nonatomic) CKTestRequestProperties *testRequestProperties;
@property (nonatomic) BOOL didFetchNilAuthToken;
@property (readonly, nonatomic) CKDContainer *container;
@property (readonly, weak, nonatomic) CKDOperation *operation;
@property (nonatomic) BOOL allowAutomaticRedirects;
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (readonly, nonatomic) BOOL sendRequestAnonymously;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL handlesAnonymousCKUserIDPropagation;
@property (readonly, nonatomic) BOOL requiresCKAnonymousUserIDs;
@property (readonly, nonatomic) BOOL requiresCKAnonymousSignature;
@property (retain, nonatomic) NSDictionary *unitTestOverrides;
@property (readonly, nonatomic) CKDProtobufStreamWriter *streamWriter;
@property (copy, nonatomic) id /* block */ requestProgressBlock;
@property (copy, nonatomic) id /* block */ responseProgressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) CKDResponseBodyParser *responseBodyParser;
@property (readonly, nonatomic) NSString *httpMethod;
@property (readonly, nonatomic) NSDictionary *additionalHeaderValues;
@property (retain, nonatomic) NSDictionary *clientProvidedAdditionalHeaderValues;
@property (readonly, nonatomic) BOOL hasRequestBody;
@property (readonly, nonatomic) BOOL expectsResponseBody;
@property (readonly, nonatomic) NSInputStream *requestBodyStream;
@property (readonly, nonatomic) NSArray *requestOperations;
@property (readonly, nonatomic) NSArray *requestOperationClasses;
@property (readonly, nonatomic) int isolationLevel;
@property (readonly, nonatomic) int requestOriginator;
@property (readonly, nonatomic) int operationType;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) long long serverType;
@property (readonly, nonatomic) long long partitionType;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL shouldCompressBody;
@property (readonly, nonatomic) NSString *acceptContentType;
@property (readonly, nonatomic) NSString *requestContentType;
@property (readonly, nonatomic) NSString *protobufOperationName;
@property (readonly, nonatomic) BOOL requestGETPreAuth;
@property (retain, nonatomic) NSDictionary *fakeResponseOperationResultByItemID;
@property (readonly) BOOL isFinished;
@property (readonly, nonatomic) NSDictionary *responseHeaders;
@property (readonly, nonatomic) long long responseStatusCode;
@property (readonly, nonatomic) NSString *requestUUID;
@property BOOL needsAuthRetry;
@property BOOL isWaitingOnAuthRenew;
@property BOOL isHandlingAuthRetry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long qualityOfService;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (void)dealloc;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 _didReceiveData:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 _willRetryBackgroundDataTask:(id)a1 withError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)cancel;
- (id)initWithOperation:(id)a0;
- (double)timeoutIntervalForResource;
- (void)URLSession:(id)a0 _taskIsWaitingForConnection:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 _conditionalRequirementsChanged:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (double)timeoutIntervalForRequest;
- (void)finishWithError:(id)a0;
- (BOOL)validate:(id *)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)ckShortDescription;
- (id)privacyProxyFailClosedOverride;
- (BOOL)markAsFinished;
- (void)tearDownResources;
- (void)_performRequest;
- (void)requestDidParsePlaintextObject:(id)a0;
- (id)_CFNetworkTaskIdentifierString;
- (void)_acquireZoneGates;
- (void)_authTokenWithCompletionHandler:(id /* block */)a0;
- (void)_fetchContainerScopedUserID;
- (void)_fetchDeviceID;
- (void)_fetchServerCertificatesIfNeeded;
- (void)_finalizeRequestOperations:(id)a0 request:(id)a1;
- (void)_finishOnLifecycleQueueWithError:(id)a0;
- (void)_handleAuthFailure;
- (void)_handlePlistResult:(id)a0;
- (void)_handleServerJSONResult:(id)a0;
- (long long)_handleServerProtobufResult:(id)a0 rawData:(id)a1;
- (void)_loadRequest:(id)a0;
- (BOOL)_onLifecycleQueue;
- (id)_parseErrorDictionaryForJson:(id)a0;
- (void)_performWillSendTestCallback;
- (void)_prepareAuthTokens;
- (void)_prepareCloudKitAuthToken;
- (id /* block */)_protobufObjectParsedBlock;
- (void)_registerPushTokens;
- (void)_registerRequestOperationTypesForOperations:(id)a0;
- (void)_renewAuthTokenWithCompletionHandler:(id /* block */)a0;
- (void)_setupConfiguration;
- (void)_setupPrivateDatabaseURL;
- (void)_setupPublicDatabaseURL;
- (void)_tearDownStreamWriter;
- (void)_triggerAutoBugCaptureWithErrorPayload:(id)a0;
- (void)_validateAccountAccess;
- (id)_wrapErrorIfNecessary:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (id)createAssetAuthorizeGetRequestOptionsHeaderInfoWithKey:(id)a0 value:(id)a1;
- (id)defaultParserForContentType:(id)a0;
- (BOOL)expectDelayBeforeRequestBegins;
- (Class)expectedResponseClass;
- (BOOL)expectsSingleObject;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (void)fillOutRequestProperties:(id)a0;
- (id)generateRequestOperations;
- (BOOL)includeContainerServerInfo;
- (void)invokeCompletionBlock;
- (BOOL)isErrorInducerRequest;
- (BOOL)isFullZoneRequest;
- (id)operationRequestWithType:(int)a0;
- (BOOL)parsingStandaloneMessage;
- (void)performASyncOnLifecycleQueueIfNotFinished:(id /* block */)a0;
- (void)performASyncOnLifecycleQueueIfNotFinished:(id /* block */)a0 fallbackBlock:(id /* block */)a1;
- (BOOL)performOnLifecycleQueueIfNotFinished:(id /* block */)a0;
- (void)performRequest;
- (void)prepareRequestOperationsForRequest:(id)a0;
- (void)prepareRequestWithCompletion:(id /* block */)a0;
- (id)recordIDs:(id)a0 filteredByZones:(id)a1;
- (id)recordIDsUsedInZones:(id)a0;
- (void)requestDidComplete;
- (void)requestDidParse509CertObject:(id)a0;
- (void)requestDidParseJSONObject:(id)a0;
- (void)requestDidParseNodeFailure:(id)a0;
- (void)requestDidParsePlistObject:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (void)requestDidParseProtobufObject:(id)a0 completionHandler:(id /* block */)a1;
- (Class)requestMessageClass;
- (id)requestOperationCountsByOperationType;
- (BOOL)requiresAppPartitionURL;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresTokenRegistration;
- (BOOL)requiresUserPartitionURL;
- (void)retryRequest;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)a0 dataToBeSigned:(id)a1 error:(id *)a2;
- (id)statusReportWithIndent:(unsigned long long)a0;
- (void)tearDownResourcesAndReleaseTheZoneLocks:(BOOL)a0;
- (id)traceHeaderValues;
- (void)updateShareIDCacheWithDeletedRecordID:(id)a0;
- (void)updateShareIDCacheWithDeletedZoneID:(id)a0;
- (void)updateShareIDCacheWithRecord:(id)a0;
- (BOOL)usesCloudKitAuthToken;
- (BOOL)usesiCloudAuthToken;
- (void)validateAnonymousUserIDPropagation;
- (BOOL)wantsProtocolTranslator;
- (id)zoneIDsToLock;

@end
