@class NSTextField, NSView, NSString, CalUIIntegerFormatter, NSPopUpButton, EKAlarm, EKUICountField, EKUIAlarmGadget, IIDatePickerWithMiniCal;

@interface EKUICustomAlarmView : NSView <NSTextFieldDelegate, IIDatePickerWithMiniCalDelegate>

@property (retain) EKUIAlarmGadget *gadget;
@property (retain) EKAlarm *alarm;
@property (retain) NSPopUpButton *alarmTypeButton;
@property (retain) NSPopUpButton *auxButton;
@property (retain) NSPopUpButton *timingButton;
@property (retain) IIDatePickerWithMiniCal *datePicker;
@property (retain) EKUICountField *countField;
@property (retain) NSTextField *atField;
@property (retain) NSView *dateBox;
@property (retain) NSView *timeBox;
@property (weak) NSView *lastKeyView;
@property (retain) CalUIIntegerFormatter *countFormatter;
@property long long currentAlarmType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)startDate;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)update;
- (void)updateConstraints;
- (id)initWithGadget:(id)a0;
- (BOOL)datePickerShouldDisplayMiniCal:(id)a0;
- (id)_iCalURL;
- (BOOL)_isAddingEmailAlarmValid;
- (void)addMenuItemForAlarmType:(long long)a0 withTitle:(id)a1;
- (void)addMenuItemForTimingType:(long long)a0 withTitle:(id)a1;
- (double)additionalVerticalOffsetForPickerPopover;
- (void)chooseAlarmType:(id)a0;
- (void)chooseEmail:(id)a0;
- (void)chooseFile:(id)a0;
- (void)chooseICal:(id)a0;
- (void)chooseNewFile:(id)a0;
- (void)chooseSound:(id)a0;
- (void)chooseTiming:(id)a0;
- (void)countChanged;
- (void)datePickerDidResignFirstResponder:(id)a0;
- (BOOL)datePickerShouldDisplayTimeSuggestions:(id)a0;
- (void)datePickerWithMiniCalChanged:(id)a0;
- (void)displayOpenPanelForDirectory:(id)a0 scriptsOnly:(BOOL)a1;
- (void)fillAuxMenuWithEmailAddresses;
- (void)fillAuxMenuWithFilesWithNewFileItem:(id)a0;
- (void)fillTimingMenu;
- (void)setAlarmFileURL:(id)a0;

@end
