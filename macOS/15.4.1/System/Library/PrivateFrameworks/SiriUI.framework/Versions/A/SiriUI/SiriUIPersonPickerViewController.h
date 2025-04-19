@class NSString, CNContactPicker;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <CNContactPickerDelegate> {
    CNContactPicker *_peoplePicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidClose:(id)a0;
- (void)contactPickerWillClose:(id)a0;
- (void)showPicker:(id)a0;
- (void)_dismissPicker;
- (id)_pickerResponseForPerson:(id)a0;

@end
