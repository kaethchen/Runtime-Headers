@protocol AMSDServiceBrokerProtocol;

@interface AMSSigningSecurityService : NSObject

@property (class, readonly, nonatomic) AMSSigningSecurityService *sharedService;

@property (readonly) id<AMSDServiceBrokerProtocol> serviceBroker;

- (id)init;
- (void).cxx_destruct;
- (id)_defaultSecurityServiceWithDelegate:(id)a0;
- (id)_handleResponse:(id)a0 bag:(id)a1 securityServicePromise:(id)a2 onDenied:(id /* block */)a3;
- (void)_handleSecurityServicePromise:(id)a0 onConnected:(id /* block */)a1 onDenied:(id /* block */)a2 onError:(id /* block */)a3;
- (id)_headersForRequest:(id)a0 buyParams:(id)a1 securityServicePromise:(id)a2 onDenied:(id /* block */)a3;
- (id)handleResponse:(id)a0 bag:(id)a1;
- (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
- (id)initWithServiceBroker:(id)a0;
- (id)signatureForRequest:(id)a0;

@end
