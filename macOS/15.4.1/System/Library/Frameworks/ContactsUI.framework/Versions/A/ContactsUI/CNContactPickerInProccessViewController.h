@class CNContactListController, ABAddressBook, CNGroupListEntriesFactory, ABGroupEntriesList, CNContactCardViewController, CNGroupListController, CNGroupListView, NSString, CNContactListView, CNContactPickerFamilyMemberScope, FAFamilyMember, CNContactStore, ABBookSearchField, NSArray, ABPersonListSearchController, CNContactPickerNotificationWatcher, CNContactPickerSearchController, ABPersonEntriesList;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerInProccessViewController : NSViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerViewControllerSearch> {
    ABAddressBook *_addressBook;
    CNContactStore *_contactStore;
    CNContactPickerNotificationWatcher *_notificationWatcher;
    CNContactPickerSearchController *_contactSearchController;
    ABPersonEntriesList *_personEntriesList;
    CNGroupListEntriesFactory *_groupEntriesFactory;
    ABGroupEntriesList *_groupEntriesList;
}

@property (weak) CNGroupListView *groupListView;
@property (weak) CNContactListView *contactListView;
@property (weak) ABBookSearchField *searchField;
@property (retain) CNContactCardViewController *contactCardViewController;
@property (retain) CNGroupListController *groupListController;
@property (retain) CNContactListController *contactListController;
@property (retain) CNContactPickerFamilyMemberScope *familyMemberScope;
@property (readonly, nonatomic, getter=shouldShowSelectedContact) BOOL showSelectedContact;
@property (readonly, nonatomic, getter=shouldHighlightSelectedContact) BOOL highlightSelectedContact;
@property (readonly, nonatomic, getter=shouldAllowMultipleSelection) BOOL allowMultipleSelection;
@property (readonly, nonatomic) NSArray *prohibitedPropertykeys;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) NSArray *selectedContacts;
@property (nonatomic, getter=isEditingSelectedContact) BOOL editingSelectedContact;
@property (weak) id<CNContactPickerInternalResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) ABPersonListSearchController *searchController;
@property (getter=isSearchFieldVisible) BOOL searchFieldVisible;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibName;
- (void)awakeFromNib;
- (void)addSection:(id)a0;
- (void)prepareForDisplay;
- (void)setAccounts:(id)a0;
- (void)setPickerScope:(id)a0;
- (void)pickerDidCreate;
- (id)browsingHeadliner;
- (void)commonInitWithAddressBook:(id)a0 contactStore:(id)a1 prohibitedPropertykeys:(id)a2;
- (BOOL)contactCardVisible;
- (unsigned long long)countOfContactsExpanded;
- (unsigned long long)countOfGroupsViewed;
- (unsigned long long)countOfLocalSearchesPerformed;
- (unsigned long long)countOfServerSearchesPerformed;
- (void)ensureSearchControllerHasSearchConfigurationIfGroupsPaneNotVisible;
- (void)finalizePickerCreation;
- (id)initWithFAFamilyMember:(id)a0 prohibitedPropertyKeys:(id)a1;
- (id)initWithShowSelectedContact:(BOOL)a0 highlightSelectedContact:(BOOL)a1;
- (id)makeGroupListNotificationHandler;
- (id)makePersonListUIReflector;
- (void)performInitialSelection;
- (id)pickerView;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)resetUsageStatistics;
- (void)setAllowsNamePicking:(BOOL)a0;
- (void)setContactListBottomContentInset:(double)a0;
- (void)setDisplayedKeys:(id)a0;
- (void)setupContactCardViewController;
- (void)setupContactListController;
- (void)setupGroupListController;
- (void)setupNotificationWatcher;
- (void)setupSearchController;
- (void)showSectionWithIdentifier:(id)a0;
- (void)traceUsageStatistics;
- (id)viewForButtonConstraints;

@end
