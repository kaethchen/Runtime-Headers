@class NSViewController;

@interface PhotosUICore.LegacyPersonBannerModelProxy : NSObject <PXPhotosBannerPresentationDelegate, PXPresentationEnvironment> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ canPresentPopovers;
}

@property (nonatomic, readonly) NSViewController *presentingViewController;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ canPushViewController;

- (id)init;
- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (BOOL)pushViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)presentAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAlertWithToken:(id)a0 withDelay:(double)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)presentationEnvironmentForPhotosBannerProvider:(id)a0;

@end
