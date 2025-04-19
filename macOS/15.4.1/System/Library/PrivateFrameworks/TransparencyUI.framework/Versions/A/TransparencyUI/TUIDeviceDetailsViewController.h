@class NSProgressIndicator, AADeviceList, NSArray, NSString, NSStackView, NSMutableArray, AIDAAccountManager, TUIIDMSDeviceSource;

@interface TUIDeviceDetailsViewController : NSViewController <AADeviceListDelegate>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) AADeviceList *deviceList;
@property (retain, nonatomic) NSArray *devicesWithIssuesIdentifiers;
@property (retain, nonatomic) NSMutableArray *devicesWithIssues;
@property (retain, nonatomic) NSMutableArray *unknownDevices;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) NSStackView *devicesStackView;
@property (retain, nonatomic) TUIIDMSDeviceSource *idms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)deviceListModified:(id)a0;
- (id)_createDeviceSubview:(id)a0 deviceID:(id)a1;
- (id)_deviceList;
- (id)_iconURLForDevice:(id)a0;
- (void)_setupDevicesStackView;
- (void)_updateDevicesWithIssuesList:(id)a0;
- (id)initWithAccountManager:(id)a0 devicesWithIssuesIdentifiers:(id)a1;

@end
