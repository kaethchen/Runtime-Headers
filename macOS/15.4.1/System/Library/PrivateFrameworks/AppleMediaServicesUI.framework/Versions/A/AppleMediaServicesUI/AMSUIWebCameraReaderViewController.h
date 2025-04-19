@class AMSUIWebNavigationBarModel, NSString, AMSUIWebCameraReaderInfoView, AMSUIWebAppearance, NSDictionary, NSViewController, AMSUIWebClientContext, AMSUIWebCameraReaderPageModel;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUICodeRedeemerViewControllerDelegate, AMSUIWebPagePresenter>

@property (retain) AMSUIWebAppearance *appearance;
@property (retain) NSViewController *childController;
@property (retain) AMSUIWebClientContext *context;
@property (retain) AMSUIWebCameraReaderInfoView *infoView;
@property (retain) AMSUIWebCameraReaderPageModel *model;
@property (retain) AMSUIWebNavigationBarModel *navigationBarModel;
@property (retain) NSDictionary *output;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)_setupTextEntry;
- (void)_applyAppearance;
- (id)_cameraReader;
- (id)_codeRedeemer;
- (void)_commitNavigationBarModel;
- (void)_handleCameraOutput:(id)a0 error:(id)a1;
- (void)_layoutFullScreen;
- (void)_layoutHalfScreen;
- (void)_layoutPage;
- (void)_layoutTextField;
- (id)_outputForCreditCardReaderObjects:(id)a0;
- (id)_outputForGiftCardReaderCode:(id)a0;
- (id)_outputForGiftCardReaderObjects:(id)a0;
- (id)_outputForIDCardReaderObjects:(id)a0;
- (void)_setCameraToggleButton;
- (void)_setCancelButton;
- (void)_setChild:(id)a0;
- (void)_setRedeemButton;
- (void)_setupCameraReader;
- (void)_setupCameraToggle;
- (void)_setupInfoView;
- (void)_setupNavigationModel;
- (void)_setupPage;
- (void)_setupPageForCreditCard;
- (void)_setupPageForGiftCard;
- (void)_setupPageForIDCard;
- (void)codeRedeemer:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemer:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemer:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemerDidDismiss:(id)a0;
- (void)codeRedeemerDidFadeStatus:(id)a0;
- (void)codeRedeemerDidFindBox:(id)a0;
- (void)codeRedeemerDidStart:(id)a0;
- (void)codeRedeemerWillFadeStatus:(id)a0;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
