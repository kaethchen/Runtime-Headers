@class NSString, ObjectTableDataSource, NSTableView, NSButton;

@interface IOBluetoothConcreteServiceBrowserController : IOBluetoothConcreteDeviceController <NSTableViewDelegate> {
    NSButton *mRefreshServicesButton;
    NSTableView *mServicesTableView;
    ObjectTableDataSource *mServicesTableDataSource;
    BOOL mSDPQueryInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)browseDevices:(id *)a0 options:(unsigned int)a1;
+ (int)browseDevicesAsSheetForWindow:(id *)a0 options:(unsigned int)a1 window:(id)a2;
+ (id)serviceBrowserController:(unsigned int)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)selectionShouldChangeInTableView:(id)a0;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)windowNibName;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)deviceCategoryChanged:(id)a0;
- (void)deviceInquiryTableViewInquiryComplete:(id)a0 error:(int)a1 aborted:(BOOL)a2;
- (int)discover:(id *)a0;
- (int)discoverAsSheetForWindow:(id)a0 withRecord:(id *)a1;
- (int)discoverWithDeviceAttributes:(struct IOBluetoothDeviceSearchAttributes { unsigned int x0; unsigned int x1; unsigned int x2; struct IOBluetoothDeviceSearchDeviceAttributes *x3; } *)a0 serviceList:(id)a1 serviceRecord:(id *)a2;
- (void)enableRefreshServicesButton:(BOOL)a0;
- (void)enableSelect:(BOOL)a0;
- (id)getResults;
- (void)getSDPInfoForDevice:(id)a0 ignoreCache:(BOOL)a1;
- (struct OpaqueIOBluetoothObjectRef { } *)getServiceBrowserControllerRef;
- (id)getWindowFrameName;
- (void)handleSelectButton:(id)a0;
- (void)refreshServiceList:(id)a0;
- (void)sheetEnded:(id)a0 returnCode:(int)a1 contextInfo:(void *)a2;
- (void)startSearchServiceWindow;
- (void)updateServicesTableViewForSelectedDevice;

@end
