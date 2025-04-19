@class CalUIResizingTextField, NSTextField, NSView, NSArray, EKUIPopUpButton, NSNumber, NSString;

@interface EKUIEndRepeatGadget : EKUIDateTimeGadget <CalUIResizingTextFieldDelegate>

@property (retain) NSView *endRepeatContainerView;
@property (retain) EKUIPopUpButton *endRepeatTypePicker;
@property (retain) CalUIResizingTextField *numberOfTimesField;
@property (retain) NSTextField *numberOfTimesLabel;
@property (retain) NSArray *endConstraints;
@property (retain) NSNumber *selectedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAfter;
+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (double)baselineOffset;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)updateConstraints;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)addNewMenuItemForEndType:(unsigned long long)a0 withTitle:(id)a1;
- (void)datePickerChangedToDate:(id)a0;
- (void)endTypeSelected:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (void)removeRecurrenceEnd;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateRecurrenceEndForAfterNumberOfOccurrences:(unsigned long long)a0;
- (void)updateRecurrenceEndWithDate:(id)a0;
- (void)updateWithChanges:(id)a0;
- (id)viewForBaselineAlignment;

@end
