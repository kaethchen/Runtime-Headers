@class NSString;

@interface IOBluetoothHardwareValidation : NSObject {
    id mNoHardarePanel;
    id mHardwareOffPanel;
    id mNoHWIcon;
    id mNoHWText;
    id mNoHWCancelButton;
    id mHWOffIcon;
    id mHWOffText;
    id mHWOffOkButton;
    id mHWOffCancelButton;
    NSString *mCancelText;
}

- (id)init;
- (void).cxx_destruct;
- (void)windowWillClose:(id)a0;
- (void)handleButtonAction:(id)a0;
- (int)runModalWithUserSettings:(id)a0 description:(id)a1;

@end
