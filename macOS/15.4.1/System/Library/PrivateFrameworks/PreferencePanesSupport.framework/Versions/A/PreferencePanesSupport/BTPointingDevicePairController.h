@class NSTextField, NSString, NSProgressIndicator, NSArrayController, NSView, IOBluetoothDevice, IOBluetoothDeviceInquiry, NSImage, IOBluetoothDevicePair, NSButton, NSTableView;

@interface BTPointingDevicePairController : InputDeviceController <IOBluetoothDevicePairDelegate> {
    NSTextField *mTopLabel;
    NSTextField *mTopLabelDescription;
    NSTableView *mDeviceTable;
    NSArrayController *mBTKeyboardList;
    NSButton *mPairButton;
    NSButton *mBackButton;
    NSProgressIndicator *mProgressIndicator;
    NSTextField *mProgressIndicatorLabel;
    NSTextField *mNoDevicesTableLabel;
    NSImage *mBTAlertIconImage;
    NSView *mBTWarningView;
    NSTextField *mBTWarningViewLabel;
    BOOL mBTPowerIsOn;
    BOOL mBTIsAvailable;
    IOBluetoothDevice *mSelectedDevice;
    IOBluetoothDeviceInquiry *mDeviceInquiry;
    IOBluetoothDevicePair *mDevicePair;
    BOOL mIsPairing;
    long long mDevicePairAttemptsCount;
}

@property BOOL agressiveDeviceValidation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateButtons;
- (void)deviceInquiryComplete:(id)a0 error:(int)a1 aborted:(BOOL)a2;
- (void)deviceInquiryDeviceFound:(id)a0 device:(id)a1;
- (void)deviceInquiryDeviceNameUpdated:(id)a0 device:(id)a1 devicesRemaining:(unsigned int)a2;
- (void)deviceInquiryStarted:(id)a0;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(id)a0 devicesRemaining:(unsigned int)a1;
- (void)devicePairingConnecting:(id)a0;
- (void)devicePairingFinished:(id)a0 error:(int)a1;
- (void)devicePairingPINCodeRequest:(id)a0;
- (void)devicePairingStarted:(id)a0;
- (void)updateDevice:(id)a0;
- (void)_updateUI;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)_stopBTActivity;
- (void)_btAvailabilityDidChangeNotification:(id)a0;
- (void)_btOffAlertDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)_btPowerStateDidChangeNotification:(id)a0;
- (void)_driverFailedToLoad:(id)a0;
- (void)_showErrorState:(int)a0 failedToLoad:(BOOL)a1;
- (void)_startDeviceInquiry:(id)a0;
- (void)_startPairing:(id)a0;
- (void)_updateBTUI;
- (id)deviceInquiry;
- (id)locstring:(id)a0;
- (void)pair:(id)a0;
- (void)willSwitchOut;

@end
