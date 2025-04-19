@class NSString, SFCertificatePresentationController, NSURL, NSWindow;

@interface SFCertificatePresentation : NSObject <SFCertificatePresentationControllerDelegate>

@property (retain, nonatomic) SFCertificatePresentationController *controller;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (retain, nonatomic) NSWindow *presentationAnchor;
@property (readonly, nonatomic) struct __SecTrust { } *trust;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSURL *helpURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)dismissSheet;
- (void)certificatePresentationControllerDidDismiss:(id)a0;
- (id)presentationWindowForCertificatePresentationController:(id)a0;
- (void)_presentSheetWithPresentationAnchor:(id)a0 dismissHandler:(id /* block */)a1;
- (void)presentSheetInWindow:(id)a0 dismissHandler:(id /* block */)a1;

@end
