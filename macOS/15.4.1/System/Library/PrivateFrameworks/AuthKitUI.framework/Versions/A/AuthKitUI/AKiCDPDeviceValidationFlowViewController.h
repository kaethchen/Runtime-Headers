@class AKiCDPValidationDevice, NSArray, AKiCDPEnrollmentDeviceListViewController, AKiCDPEnrollmentDevicePasscodeViewController, AKiCDPWaitForApprovalViewController, OBTemplateView;
@protocol MBSecondPartyHost, AKiCDPValidationDelegate;

@interface AKiCDPDeviceValidationFlowViewController : NSViewController

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AKiCDPEnrollmentDeviceListViewController *deviceListVC;
@property (retain, nonatomic) AKiCDPEnrollmentDevicePasscodeViewController *passcodeVC;
@property (retain, nonatomic) AKiCDPWaitForApprovalViewController *approvalVC;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (readonly, nonatomic) NSArray *devices;
@property (retain, nonatomic) AKiCDPValidationDevice *selectedDevice;
@property (nonatomic) id<AKiCDPValidationDelegate> delegate;
@property (nonatomic) id<MBSecondPartyHost> assistant;

- (void).cxx_destruct;
- (void)completelyFillWithView:(id)a0;
- (id)initWithDelegate:(id)a0 assistant:(id)a1;
- (id)localizedStringForKey:(id)a0 deviceClass:(id)a1;
- (BOOL)shouldUseJustDeviceNameForDevice:(id)a0;
- (void)showLoginAlertWithTitle:(id)a0 message:(id)a1 buttleTitle:(id)a2 withCompletion:(id /* block */)a3;
- (void)showLoginAlertWithTitle:(id)a0 message:(id)a1 withCompletion:(id /* block */)a2;
- (void)showRunOutOfDevicesOptionsSheetForDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)startiCDPValidationFlow;
- (void)switchToApproveFromAnotherDevice;
- (void)switchToDeviceCodeEntry;
- (void)switchToDevicePicker:(unsigned long long)a0;

@end
