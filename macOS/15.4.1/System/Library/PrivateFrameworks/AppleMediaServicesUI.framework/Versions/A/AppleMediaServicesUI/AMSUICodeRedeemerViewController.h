@class NSButton, CRCodeRedeemerView, NSString;
@protocol AMSUICodeRedeemerViewControllerDelegate;

@interface AMSUICodeRedeemerViewController : NSViewController <CRCodeRedeemerViewDelegate>

@property (class, readonly) BOOL isSupported;

@property (retain) CRCodeRedeemerView *codeRedeemView;
@property (readonly) NSButton *dismissButton;
@property (weak) id<AMSUICodeRedeemerViewControllerDelegate> delegate;
@property double sessionTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayout;
- (void)stopSession;
- (void)startSession;
- (void)codeRedeemerViewCameraDidStart:(id)a0;
- (void)codeRedeemerViewWillFadeStatus:(id)a0;
- (void)codeRedeemerView:(id)a0 didFailWithError:(id)a1;
- (void)codeRedeemerView:(id)a0 didSucceedWithCodes:(id)a1;
- (void)codeRedeemerView:(id)a0 willRecognizeCodes:(id)a1;
- (void)codeRedeemerViewDidFadeStatus:(id)a0;
- (void)codeRedeemerViewDidFindBox:(id)a0;
- (id)initWithDismissButtonLabel:(id)a0;
- (void)showStatus:(id)a0 withColor:(struct CGColor { } *)a1 duration:(double)a2 style:(unsigned long long)a3;
- (void)stopSession:(id)a0;

@end
