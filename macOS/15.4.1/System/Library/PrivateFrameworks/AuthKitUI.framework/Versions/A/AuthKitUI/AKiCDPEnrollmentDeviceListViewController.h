@class AKiCDPDeviceValidationFlowViewController, NSArray, IASPickerViewController, NSString, OBTemplateView, NSView;

@interface AKiCDPEnrollmentDeviceListViewController : NSViewController <NSTableViewDelegate>

@property (nonatomic) AKiCDPDeviceValidationFlowViewController *flowController;
@property (retain, nonatomic) IASPickerViewController *devicePickerController;
@property (copy, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSString *chooseDeviceString;
@property (retain, nonatomic) NSString *forgotDevicesString;
@property (nonatomic) BOOL forgotAllPasswordsAndPasscodesButtonEnabled;
@property (retain, nonatomic) OBTemplateView *templateView;
@property unsigned long long deviceSelection;
@property (nonatomic) NSView *devicePickerPlaceholderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)forgotAllPasswordsAndPasscodesPressed:(id)a0;
- (id)initWithFlowController:(id)a0;
- (void)setUpDevicesSpecificStrings;

@end
