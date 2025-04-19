@class NSString, HMMTRUIDialogPresenter;

@interface HMMTRUserAuthorizationForPairing : NSObject <HMFLogging, HMMTRUserAuthorizationForPairingDelegate>

@property (retain, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithUiDialogPresenter:(id)a0;
- (void)requestUserPermissionForBridgeAccessory:(id)a0 completionHandler:(id /* block */)a1;

@end
