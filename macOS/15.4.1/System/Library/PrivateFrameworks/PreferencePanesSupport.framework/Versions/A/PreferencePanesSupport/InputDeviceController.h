@class NSString, NSWindow;

@interface InputDeviceController : NSObject {
    NSWindow *mLowBatteryWindow;
    NSString *mHelpAnchorName;
    NSString *mLowBatteryHelpAnchorName;
}

@property (readonly) NSString *nibFileName;
@property (readonly) BOOL enableLogs;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)showHelp:(id)a0;
- (void)updateButtons;
- (void)updateDevice:(id)a0;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)lowBatteryHelp:(id)a0;
- (id)fieldEditorForObject:(id)a0;
- (void)helpLookup:(id)a0;
- (void)lowBatteryButton:(id)a0;
- (void)lowBatterySheetDone:(id)a0;
- (id)nibFileName;
- (void)openMouseKeysPref:(id)a0;
- (void)willSwitchOut;

@end
