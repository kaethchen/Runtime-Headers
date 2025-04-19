@class CNContactStore, NSSegmentedControl, CNContactPickerBorderView, FAFamilyMember, NSString, NSButton, CNContactPickerInProccessViewController;
@protocol CNSchedulerProvider, CNUICoreFamilyMemberContactsDataSource, CNFamilyMemberContactsViewControllerDelegate;

@interface CNFamilyMemberContactsViewController : NSViewController <CNFamilyMemberEditControlsViewControllerDelegate, CNUICoreFamilyMemberContactsObserver, CNContactListControllerDelegate>

@property (readonly, nonatomic) CNContactStore *localContactStore;
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsDataSource> dataSource;
@property (readonly, nonatomic) CNContactPickerInProccessViewController *familyScopedContactPicker;
@property (readonly, nonatomic) NSButton *doneButton;
@property (readonly, nonatomic) NSButton *editButton;
@property (readonly, nonatomic) NSSegmentedControl *segmentedControl;
@property (readonly, nonatomic) CNContactPickerBorderView *bottomBorderView;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) long long countOfFamilyMemberContacts;
@property (readonly, nonatomic) long long fetchStatus;
@property (weak, nonatomic) id<CNFamilyMemberContactsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)beginEditing;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredMinimumSize;
- (void)cancelButtonPressed:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)setupButtons;
- (void)doneButtonPressed:(id)a0;
- (void)familyMemberContactItemsDidChange;
- (void)setupUI;
- (void)addContactFromLocalContacts:(id)a0;
- (void)addNewContact:(id)a0;
- (void)didPressCancelFamilyMemberEditControlsViewController:(id)a0;
- (void)didPressDoneFamilyMemberEditControlsViewController:(id)a0;
- (void)dismissRequested:(BOOL)a0;
- (void)editButtonPressed:(id)a0;
- (void)finishEdtiting;
- (id)initWithFamilyMember:(id)a0 delegate:(id)a1;
- (void)removeSelectedContactFromFamilyMemberContacts;
- (void)segmentedControlChanged:(id)a0;
- (void)selectionChanged:(BOOL)a0;
- (void)setUpBottomBorderView;
- (void)setupConstraints;
- (void)setupFamilyScopedContactPicker;
- (void)setupViewHierarchy;
- (void)showAddToContactsDropdown;
- (void)updateFamilyMemberContactsByAddingContacts:(id)a0;
- (void)updateFamilyMemberContactsByRemovingContacts:(id)a0;

@end
