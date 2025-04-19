@class EKUIPopUpButton;

@interface EKUIRepeatPickerGadget : EKUIRepeatGadget

@property (retain) EKUIPopUpButton *repeatPicker;

- (void).cxx_destruct;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)addMenuItemForRecurrenceFrequency:(long long)a0 withTitle:(id)a1;
- (void)repeatChanged:(id)a0;
- (void)updateWithChanges:(id)a0;

@end
