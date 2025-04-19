@class AMSURLTaskInfo, AMSDelegatePurchaseRequest, AMSURLResult, AMSBiometricsSignatureRequest, AMSPaymentSheetResult, AMSDelegatePaymentSheetTask;

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask

@property (retain) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain) AMSURLResult *delegateAuthResult;
@property (retain) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (retain) AMSPaymentSheetResult *paymentSheetResult;
@property (retain) AMSDelegatePaymentSheetTask *paymentSheetTask;
@property (readonly) AMSDelegatePurchaseRequest *request;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)_provisionWatchBiometricsError:(id *)a0;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_fetchDelegateAuthResultWithRequest:(id)a0 error:(id *)a1;
- (id)_finishWithDelegateAuthenticateResult:(id)a0 resultError:(id)a1 outError:(id *)a2;
- (void)_parseBiometricsSignatureRequestFromTask:(id)a0;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)a0;
- (id)_performPaymentSheetTask;
- (BOOL)_updateBiometricsTokenError:(id *)a0;
- (id)_urlRequestForDelegateAuthError:(id *)a0;
- (id)_urlRequestParameters;
- (id)delegateAuthenticateUrl;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)performDelegatePurchase;

@end
