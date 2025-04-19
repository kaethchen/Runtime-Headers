@class NSData, NSError, EWSServerVersionInfo, NSConditionLock, EWSExchangeServiceBinding, NSString, SOAPParser, NSMutableData, EWSBaseRequestType;
@protocol EWSExchangeServiceBindingTaskDelegate;

@interface EWSExchangeServiceBindingTask : NSObject <SOAPParserDelegate> {
    NSMutableData *_loggingData;
    int _retryCount;
}

@property (readonly, nonatomic) SOAPParser *parser;
@property (retain, nonatomic) NSConditionLock *finishedConditionLock;
@property (retain, nonatomic) NSError *error;
@property (weak) id<EWSExchangeServiceBindingTaskDelegate> delegate;
@property (copy) id /* block */ completionHandler;
@property (weak) EWSExchangeServiceBinding *binding;
@property (retain) EWSBaseRequestType *request;
@property (readonly, copy) NSData *requestData;
@property (retain) id ewsResponse;
@property BOOL logActivity;
@property (retain) EWSServerVersionInfo *serverInfo;
@property double timeout;
@property (copy) NSString *schemaVersion;
@property (copy) NSString *clientRequestID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (void)start;
- (void)cancel;
- (void)handleData:(id)a0;
- (void)completeWithResponse:(id)a0;
- (double)_backOffTimeForFaultDetail:(id)a0;
- (id)_exchangeServiceErrorFromSOAPError:(id)a0;
- (id)_serverVersionInfoFromHeaders:(id)a0;
- (BOOL)_shouldRetryFromParser:(id)a0 error:(id *)a1;
- (id)runSynchronously:(id *)a0;
- (BOOL)shouldRetryForOAuthTokenRefreshWithError:(id)a0;
- (void)soapParser:(id)a0 didParseEnvelope:(id)a1;

@end
