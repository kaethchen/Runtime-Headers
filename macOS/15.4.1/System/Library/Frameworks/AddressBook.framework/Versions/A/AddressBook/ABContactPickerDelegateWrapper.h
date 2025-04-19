@class NSString, ABPersonPicker, ABAddressBook;
@protocol ABPersonPickerDelegate;

@interface ABContactPickerDelegateWrapper : NSObject <CNPrivateContactPickerDelegate> {
    id<ABPersonPickerDelegate> _delegate;
    ABPersonPicker *_picker;
    ABAddressBook *_addressBook;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addressBookPropertyByContactsProperty;

- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didChooseCompatibilityContact:(id)a1 key:(id)a2 value:(id)a3;
- (void)contactPickerDidClose:(id)a0;
- (id)backingContactsForContact:(id)a0;
- (id)contactWithLabeledValueIdentifier:(id)a0 forKey:(id)a1 inContacts:(id)a2;
- (id)contactWithValue:(id)a0 forKey:(id)a1 inContacts:(id)a2;
- (id)initWithPersonPicker:(id)a0 personPickerDelegate:(id)a1 addressBook:(id)a2;
- (id)personFromContact:(id)a0;

@end
