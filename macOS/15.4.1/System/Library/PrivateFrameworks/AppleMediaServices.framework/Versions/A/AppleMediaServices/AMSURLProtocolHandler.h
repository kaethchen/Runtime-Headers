@class NSString, AMSURLMetricsLoadURLHandler, AMSFairPlayDeviceIdentity, AMSURLSession;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
}

@property (readonly) AMSURLMetricsLoadURLHandler *metricsHandler;
@property (readonly) AMSFairPlayDeviceIdentity *fairPlayDeviceIdentity;
@property (weak) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reversePushSamplingPercentageForTask:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)shouldEnableReversePushForTask:(id)a0;
- (id)_URLIsTrustedFromRequest:(id)a0 bag:(id)a1;
- (id)_handleResponse:(id)a0 task:(id)a1;
- (void)_pingURL:(id)a0 session:(id)a1 account:(id)a2 bag:(id)a3;
- (id)_setResponseCookiesFromResponse:(id)a0 taskInfo:(id)a1;
- (id)decodeData:(id)a0 task:(id)a1 error:(id *)a2;
- (void)decodeMutableData:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (id)decodeMutableData:(id)a0 task:(id)a1 error:(id *)a2;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 error:(id *)a2;
- (void)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleResponse:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithMetricsHandler:(id)a0 fairPlayDeviceIdentity:(id)a1;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (void)reportMetricsForContext:(id)a0;

@end
