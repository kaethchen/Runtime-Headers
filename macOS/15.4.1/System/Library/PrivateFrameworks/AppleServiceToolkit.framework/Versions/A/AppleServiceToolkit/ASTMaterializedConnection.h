@class NSString, NSDictionary, NSURL, ASTIdentity, NSMutableURLRequest;
@protocol ASTConnectionStatusDelegate;

@interface ASTMaterializedConnection : NSObject <ASTConnection>

@property (nonatomic) BOOL allowsCellularAccess;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) ASTIdentity *identity;
@property (copy, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSDictionary *rawBody;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) NSString *endpoint;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *accept;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) id /* block */ didReceiveResponse;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (weak, nonatomic) id<ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) unsigned long long rootOfTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addBody:(id)a0;
- (id)_acceptLanguage;
- (unsigned long long)_rootOfTrust;
- (void)addBody:(id)a0 gzip:(BOOL)a1;
- (void)signBodyWithPayloadSigner:(id /* block */)a0;
- (void)signPayload:(id)a0 withPayloadSigner:(id /* block */)a1;

@end
