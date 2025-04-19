@class CNContactStore, CNContact, CNContactPicker, NSString, NSMutableArray;
@protocol AFUIContactPropertyPickerDelegate;

@interface AFUIContactsController : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate>

@property (retain, nonatomic) CNContactPicker *picker;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain) CNContact *me;
@property (retain) NSMutableArray *meDisplayNameObservers;
@property BOOL alwaysAllowsNamePicking;
@property (weak) id<AFUIContactPropertyPickerDelegate> contactPropertyPickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactViewControllerHeaderWasClicked:(id)a0;
- (id)contactsKeysForTextContentType:(id)a0;
- (void)_loadMe;
- (id)_customInfoForContactProperty:(id)a0 useMultilineFallback:(BOOL)a1;
- (id)_meContactInfosForTextContentType:(id)a0 meContact:(id)a1;
- (id)_meDisplayName;
- (void)addMeDisplayNameObserverAndGetInitialValue:(id)a0;
- (void)copyAddressContactInfoFromContactInfo:(id)a0 toContactInfo:(id)a1;
- (void)copyPhoneContactInfoFromContactInfo:(id)a0 toContactInfo:(id)a1;
- (void)displayContactPickerForTextContentType:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (id)formattedDateForComponents:(id)a0;
- (id)meCardViewControllerForTextContentType:(id)a0;
- (id)meContactInfosForTextContentType:(id)a0;
- (void)removeMeDisplayNameObserver:(id)a0;
- (void)unifyPhoneNumberAndAddressDataAcrossContactInfos:(id)a0 withTextContentType:(id)a1;

@end
