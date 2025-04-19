@class NSString, SFCertificatePresentationRequest, NSWindow;
@protocol SFCertificatePresentationControllerDelegate;

@interface SFCertificatePresentationController : NSObject <SFCertificateViewControllerDelegate>

@property (retain, nonatomic) SFCertificatePresentationRequest *presentationRequest;
@property (retain, nonatomic) NSWindow *presentationAnchor;
@property (weak, nonatomic) id<SFCertificatePresentationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)certificateSheetDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (id)initWithCertificatePresentationRequest:(id)a0;
- (void)certificateViewControllerDidDismiss:(id)a0;

@end
