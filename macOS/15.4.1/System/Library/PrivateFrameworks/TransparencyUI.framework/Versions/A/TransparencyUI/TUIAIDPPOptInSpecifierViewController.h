@class KTStatus, TUIKTDeviceErrorViewController, AADeviceList, TUIKTSingleAccountViewController, TUIKTOptInStatusViewController, NSStackView, NSString, NSMutableArray, TUIKTFooterViewController, TUIKTStateManager;

@interface TUIAIDPPOptInSpecifierViewController : AOSUISpyglassBaseViewController <AADeviceListDelegate, TUIOptInFlowControllerDelegate, TUIKTDeviceErrorViewControllerProtocol>

@property (retain, nonatomic) KTStatus *keyTransparencyStatus;
@property (retain, nonatomic) AADeviceList *deviceList;
@property (retain, nonatomic) TUIKTDeviceErrorViewController *deviceErrorViewController;
@property (retain, nonatomic) TUIKTStateManager *stateManager;
@property (retain, nonatomic) NSMutableArray *devicesWithErrors;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) TUIKTOptInStatusViewController *optInStatusViewController;
@property (retain, nonatomic) TUIKTSingleAccountViewController *accountKeyViewController;
@property (retain, nonatomic) TUIKTFooterViewController *footerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)deviceListModified:(id)a0;
- (id)initWithAccountManager:(id)a0;
- (void)_setupStackView;
- (void)_checkKTStatus:(BOOL)a0;
- (BOOL)_accountKeyUIFeatureEnabled;
- (void)_beginObservingTransparencyStatusChangedNotification;
- (id)_deviceList;
- (void)_maybeRefreshMonitorStateInBackground;
- (BOOL)_reportableFailureFound;
- (void)_setupDevicesWithErrorsView;
- (void)_setupFooterView;
- (void)_setupOptInStatusView;
- (void)_setupSelfAccountKeyView;
- (void)_setupUIStateCDPError;
- (void)_setupUIStateCDPWaiting;
- (void)_setupUIStateDeviceError;
- (void)_setupUIStateIDSDisabled;
- (void)_setupUIStateNoError;
- (void)_setupUIStateNoIDSAppleID;
- (void)_setupUIStateOptInPendingCDPError;
- (void)_setupUIStateOptInPendingCDPWaiting;
- (void)_setupUIStateOtherError;
- (void)_setupUIStateTemporaryError;
- (void)_setupUIStateTreeReset;
- (void)_stopObservingTransparencyStatusChangedNotification;
- (BOOL)_systemFailureUIFeatureEnabled;
- (void)_transparencyStatusChangedNotificationHandler:(id)a0;
- (void)optInFlowResultWithStateUpdate;
- (void)refreshDevices;

@end
