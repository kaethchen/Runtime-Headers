@class PKPaymentPass, PKPaymentProvisioningController, NSString, PKVerificationRequestRecord, NSNumber, PKPaymentWebService;
@protocol PKPaymentVerificationControllerFlowDelegate;

@interface PKPaymentVerificationController : NSObject <ASWebAuthenticationPresentationContextProviding> {
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    NSString *_inStoreBankAppTitle;
    NSNumber *_inStoreBankAppStoreID;
    BOOL _bankAppNotFound;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (weak, nonatomic) id<PKPaymentVerificationControllerFlowDelegate> flowDelegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (nonatomic) long long context;
@property (nonatomic) long long verificationContext;
@property (readonly, nonatomic) PKVerificationRequestRecord *verificationRecord;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly) NSString *verificationTitleString;
@property (readonly) NSString *verificationBodyString;
@property (readonly) BOOL shouldDisabledVerificationButton;
@property (readonly) NSString *continueVerificationButtonTitle;
@property (readonly) NSString *alternateMethodButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_resetState;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)verificationURL;
- (void)_accessBankVerificationURLAsAppClip;
- (void)_canPerformVerificationInlineForChannel:(id)a0 completion:(id /* block */)a1;
- (void)_completeVerificationUsingBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_accessBankVerificationURLAsWebPage:(id)a0;
- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned long long)_channelType;
- (id)_continueVerificationButtonTitleForBankAppChannel:(id)a0;
- (void)_didChangePresentation;
- (void)_downloadAndAddPassWithCompletion:(id /* block */)a0;
- (id)_formattedPhoneNumber:(id)a0 forTextMessage:(BOOL)a1;
- (void)_isAppClipVerificationURLWithCompletion:(id /* block */)a0;
- (void)_presentVerificationViewController;
- (void)_presentVerificatonEntryCompletionViewController;
- (void)_queue_sharedPaymentWebServiceChanged;
- (void)_updateVerificationStatusToComplete;
- (id)_verificationBodyStringForBankAppChannel:(id)a0;
- (id)_verificationBodyStringForOutboundPhoneCallChannel:(id)a0;
- (id)bankAppStoreID;
- (void)canPerformAnyVerificationInline:(id /* block */)a0;
- (void)canPerformVerificationInline:(id /* block */)a0;
- (void)clearSelectedChannel;
- (void)completeVerificationUsingOutboundCall;
- (void)completeVerificationUsingURL;
- (void)continueVerification;
- (void)continueVerificationUsingMethods;
- (id)defaultVerificationBodyString;
- (void)goToPreviousStep;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 context:(long long)a2 verificationContext:(long long)a3;
- (BOOL)isBankAppInstalled;
- (void)launchBankApp;
- (void)performVerificationOptionsRequest:(id)a0 completion:(id /* block */)a1;
- (void)performVerificationUpdateRequest:(id)a0 completion:(id /* block */)a1;
- (void)retryCurrentStep;
- (void)selectOtherVerificationMethod;
- (void)setVerificationRecord:(id)a0;
- (void)sharedPaymentServiceChanged;
- (void)submitVerificationCode:(id)a0 completion:(id /* block */)a1;
- (id)verificationSecureURL;
- (id)verificationURLComponents;

@end
