@class NSTextField, NSString, IOBluetoothDevice, IOBluetoothDevicePair;

@interface IOBluetoothConcretePairingController : IOBluetoothConcreteDeviceController <NSTextFieldDelegate> {
    id pinCodeDeviceNameField;
    id pinCodeRequestPanel;
    id pinCodeRespondButton;
    NSTextField *pinCodeResponseField;
    id otherAppsPanel;
    id otherAppsPanelBR;
    id useForAB;
    id useForDUN;
    id useForABPreBR;
    id useForDUNPreBR;
    id useForBladeRunner;
    unsigned char mPINCodeSheetState;
    unsigned char mNextState;
    IOBluetoothDevice *mPairedDevice;
    IOBluetoothDevicePair *mDevicePair;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (id)windowNibName;
- (void)windowWillClose:(id)a0;
- (void)setPairedDevice:(id)a0;
- (void)devicePairingConnecting:(id)a0;
- (void)devicePairingFinished:(id)a0 error:(int)a1;
- (void)devicePairingPINCodeRequest:(id)a0;
- (void)devicePairingStarted:(id)a0;
- (void)sdpQueryComplete:(id)a0 status:(int)a1;
- (void)addPairedDeviceToAddressBook;
- (void)addPairedDeviceToModemPort;
- (void)checkFirstTimeConfig;
- (id)getWindowFrameName;
- (void)handleCancelButton:(id)a0;
- (void)handleOtherAppsButton:(id)a0;
- (void)handleOtherAppsButtonBR:(id)a0;
- (void)handleOtherAppsCancelButton:(id)a0;
- (void)handlePairingCancelButton:(id)a0;
- (void)handlePairingResponseButton:(id)a0;
- (void)handleSelectButton:(id)a0;
- (void)pairingFailed:(BOOL)a0;
- (long long)runModal:(BOOL)a0;
- (void)startDevicePairing:(id)a0;
- (void)validationComplete:(id)a0;

@end
