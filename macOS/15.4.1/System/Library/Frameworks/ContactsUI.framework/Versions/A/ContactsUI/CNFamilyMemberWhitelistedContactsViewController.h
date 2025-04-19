@class NSTableView, NSSegmentedControl, NSScrollView, NSArray, NSString, CNContactStore, NSViewController, FAFamilyMember, CNContactFormatter;
@protocol CNUICoreContactManagementConsentCheck, CNFamilyMemberWhitelistedContactsViewControllerDelegate, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNSchedulerProvider;

@interface CNFamilyMemberWhitelistedContactsViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, NSMenuDelegate, CNFamilyMemberEditControlsViewControllerDelegate, CNFamilyMemberWhitelistedContactViewCellDelegate, CNUICoreFamilyMemberContactsObserver>

@property (readonly, weak, nonatomic) id<CNFamilyMemberWhitelistedContactsViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;
@property (readonly, nonatomic) id<CNUICoreContactManagementConsentCheck> contactManagentConsentCheck;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore;
@property (readonly, nonatomic) CNContactStore *mainContactStore;
@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter;
@property (readonly, nonatomic) NSTableView *tableView;
@property (readonly, nonatomic) NSScrollView *scrollView;
@property (readonly, nonatomic) NSSegmentedControl *segmentedControl;
@property (weak, nonatomic) NSViewController *presentedContactPicker;
@property (retain, nonatomic) NSArray *previouslyFetchedFamilyMemberContactItems;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) unsigned long long countOfWhitelistedContacts;
@property (nonatomic) BOOL downtimeRestictionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)notifyDelegate;
- (id)familyMemberContactItems;
- (void)familyMemberContactItemsDidChange;
- (void)reloadInterface;
- (void)setupUI;
- (void)setupScrollView;
- (void)addContactFromLocalContacts:(id)a0;
- (void)addContactFromMyFamilyMemberContacts:(id)a0;
- (void)addNewContact:(id)a0;
- (id)addToWhitelistOptionsMenu;
- (void)cell:(id)a0 didDismissDetailsOfFamilyMemberContactItem:(id)a1 withResult:(id)a2;
- (void)cell:(id)a0 didRequestDetailsOfFamilyMemberContactItem:(id)a1;
- (void)commitChangesToWhitelistedContacts;
- (BOOL)contactManagementEnabled;
- (void)didPressCancelFamilyMemberEditControlsViewController:(id)a0;
- (void)didPressDoneFamilyMemberEditControlsViewController:(id)a0;
- (id)initWithFamilyMember:(id)a0 delegate:(id)a1;
- (BOOL)isManagingFamilyMembersWhitelist;
- (void)presentContact:(id)a0 matchingItemFamilyMemberContactItem:(id)a1 forCell:(id)a2;
- (void)removeSelectedContactFromWhitelist;
- (void)segmentedControlChanged:(id)a0;
- (void)setupConstraints;
- (void)setupSegmentedControl;
- (void)setupTableView;
- (void)setupViewHierarchy;
- (void)showAddToWhitelistDropdown;
- (id)warningMessageWhenDisplayingConact:(id)a0 cell:(id)a1;

@end
