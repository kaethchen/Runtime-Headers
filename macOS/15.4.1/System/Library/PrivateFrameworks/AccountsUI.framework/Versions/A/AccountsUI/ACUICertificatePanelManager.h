@class NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface ACUICertificatePanelManager : NSObject

@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property BOOL userAccepted;
@property (readonly) struct __SecTrust { } *trust;
@property (readonly) NSError *error;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)showCertificatePanelInWindow:(id)a0 isSetup:(BOOL)a1 withAccount:(id)a2 completion:(id /* block */)a3;
- (void)_certificatePanelDidEnd:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)_showCertificatePanelInWindow:(id)a0 withAccount:(id)a1 canContinue:(BOOL)a2 saveHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)showCertificatePanelInWindow:(id)a0 completion:(id /* block */)a1;
- (void)showCertificatePanelInWindow:(id)a0 isSetup:(BOOL)a1 withAccount:(id)a2 saveHandler:(id /* block */)a3 completion:(id /* block */)a4;

@end
