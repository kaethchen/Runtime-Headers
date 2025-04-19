@class AMSPaymentSheetAssetCache, NSString, AMSFinancePaymentSheetResponse, AMSPurchaseInfo, PKPaymentAuthorizationController, AMSPaymentSheetRequest, NSMutableArray, AMSMutablePromise, AKAppleIDAuthenticationContext, NSDictionary, _PaymentSheetState;
@protocol AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain) AMSPaymentSheetAssetCache *assetCache;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain) PKPaymentAuthorizationController *paymentAuthorizationController;
@property (retain) AMSMutablePromise *paymentSheetPromise;
@property (readonly) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (readonly) AMSPaymentSheetRequest *request;
@property (retain) _PaymentSheetState *state;
@property (retain) NSMutableArray *userActions;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *metricsDictionary;
@property (copy) NSString *presentingSceneBundleIdentifier;
@property (copy) NSString *presentingSceneIdentifier;
@property (retain) id presentingWindow;
@property (retain) AMSPurchaseInfo *purchaseInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldCompanionAuthFallbackToPasswordForError:(id)a0;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)perform;
- (id)_authorizePaymentWithAuthKitResults:(id)a0;
- (id)_authorizePaymentWithBiometricsRequest:(id)a0 payment:(id)a1;
- (id)_buildPaymentRequest;
- (void)_configureAttachSelectedCard:(id)a0;
- (void)_configureBasicsForPaymentRequest:(id)a0 amsPaymentRequest:(id)a1;
- (void)_configureConfirmationScreenForPaymentRequest:(id)a0 amsPaymentRequest:(id)a1;
- (void)_configureContentItemsForPaymentRequest:(id)a0 amsPaymentRequest:(id)a1;
- (void)_configureCustomUIForPaymentRequest:(id)a0 amsPaymentRequest:(id)a1;
- (void)_configureLanguage:(id)a0 completion:(id /* block */)a1;
- (void)_configureMerchantSessionForPaymentRequest:(id)a0;
- (void)_configurePSD2Decoration:(id)a0 completion:(id /* block */)a1;
- (void)_configurePaymentSummaryForPaymentRequest:(id)a0;
- (void)_didDismissPaymentAuthorizationController:(id)a0;
- (void)_dismissPaymentAuthorizationController:(id)a0;
- (id)_metricsEvent;
- (id)_performInProcessTask;
- (id)_performRemoteTask;
- (void)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)a0 purchaseResult:(id)a1;
- (void)_presentPaymentConfirmationWithPaymentRequest:(id)a0 purchaseResult:(id)a1;
- (id)_presentPaymentSheetWithPaymentRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (id)presentationSceneBundleIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationController:(id)a0;
- (id)presentationWindowForPaymentAuthorizationController:(id)a0;

@end
