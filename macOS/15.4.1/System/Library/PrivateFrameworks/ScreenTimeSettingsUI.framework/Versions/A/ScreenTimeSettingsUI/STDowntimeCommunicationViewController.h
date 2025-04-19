@class NSView, NSString, CNFamilyMemberContactsViewController, STCoreUsersController, CNFamilyMemberWhitelistedContactsViewController, FAFamilyMember, NSButton, STCommunicationContactEditingViewController, NSNumber;

@interface STDowntimeCommunicationViewController : NSViewController <CNFamilyMemberContactsViewControllerDelegate, CNFamilyMemberWhitelistedContactsViewControllerDelegate, STProtectedControlDelegate>

@property (retain, nonatomic) FAFamilyMember *familyMember;
@property (retain, nonatomic) CNFamilyMemberContactsViewController *familyMemberContactsViewController;
@property (retain, nonatomic) CNFamilyMemberWhitelistedContactsViewController *familyMemberWhitelistedContactsViewController;
@property (weak, nonatomic) STCommunicationContactEditingViewController *editListViewController;
@property (retain) NSButton *leastRestrictiveOptionRadioButton;
@property (retain) NSButton *specificContactsRadioButton;
@property (readonly, nonatomic) NSString *communicationDescription;
@property (retain) NSView *contactManagementStateView;
@property (retain) NSButton *managingOnOffButton;
@property (retain) NSButton *allowContactEditingCheckBox;
@property (readonly, nonatomic) BOOL editListButtonEnabled;
@property (readonly, nonatomic) NSString *manageContactsDescriptionString;
@property (readonly, nonatomic) NSString *onOffLabelString;
@property (readonly, nonatomic) NSString *onOffButtonString;
@property (retain, nonatomic) NSNumber *numberOfContacts;
@property (readonly, copy, nonatomic) NSString *contactsLabelValue;
@property (readonly, nonatomic) BOOL contactManagementHidden;
@property (readonly, nonatomic) BOOL contactEditButtonHidden;
@property (readonly, nonatomic) BOOL allowContactEditingHidden;
@property (readonly, nonatomic) BOOL allowContactEditingEnabled;
@property (nonatomic) BOOL isValidatingSpecificContacts;
@property (nonatomic) BOOL isValidatingWhitelistedContacts;
@property (retain) STCoreUsersController *representedObject;
@property (readonly, copy, nonatomic) NSString *descriptionString;
@property (nonatomic) BOOL showContactsManagingControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAllowContactEditingEnabled;
+ (id)keyPathsForValuesAffectingAllowContactEditingHidden;
+ (id)keyPathsForValuesAffectingCommunicationDescription;
+ (id)keyPathsForValuesAffectingContactEditButtonHidden;
+ (id)keyPathsForValuesAffectingContactManagementHidden;
+ (id)keyPathsForValuesAffectingContactsLabelValue;
+ (id)keyPathsForValuesAffectingEditListButtonEnabled;
+ (id)keyPathsForValuesAffectingManageContactsDescriptionString;
+ (id)keyPathsForValuesAffectingOnOffButtonString;
+ (id)keyPathsForValuesAffectingOnOffLabelString;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)dismissFamilyMemberContactsViewController:(id)a0;
- (void)familyMemberContactsDidChangeFamilyMemberContactsViewController:(id)a0;
- (void)whitelistedContactsDidChangeWhitelistedContactsViewController:(id)a0;
- (void)whitelistedContactsViewController:(id)a0 dismissViewController:(id)a1;
- (void)whitelistedContactsViewController:(id)a0 presentViewController:(id)a1;
- (void)_contactStoreDidChange:(id)a0;
- (void)_createFamilyMemberWhitelistedContactsViewController;
- (void)_discardChangesNotification:(id)a0;
- (BOOL)_familyMemberChangedForOldUser:(id)a0 newUser:(id)a1;
- (void)_presentWhitelistedContactsViewControllerIfNeeded;
- (void)_saveChangesNotification:(id)a0;
- (void)_saveDowntimeCommunicationPolicy:(long long)a0;
- (void)_setAllowContactEditing:(BOOL)a0;
- (void)_updateFamilyMemberContactsViewController;
- (void)_validateAllowContactEditingCheckBoxState;
- (void)_validateContactManagementControlsHidden;
- (void)_validateRadioButtonState;
- (void)actionCancelledForControl:(id)a0;
- (void)chooseRadioButton:(id)a0;
- (void)clickEditButton:(id)a0;
- (void)toggleAllowContactEditingCheckBox:(id)a0;
- (void)toggleOnOffButton:(id)a0;

@end
