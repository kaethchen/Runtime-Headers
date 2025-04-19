@class NSString, NSView, InputDeviceController, NSButton;

@interface InputDeviceNibController : NSObject

@property (readonly) NSView *contentView;
@property (readonly) NSString *nibFileName;
@property (readonly) NSButton *setupBTButton;
@property (readonly) NSButton *setupBTBackButton;
@property (readonly) InputDeviceController *controller;

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateButtons;
- (void)updateDevice:(id)a0;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)_btAvailabilityDidChangeNotification:(id)a0;
- (id)fieldEditorForObject:(id)a0;
- (id)nibFileName;
- (void)willSwitchOut;

@end
