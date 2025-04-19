@class ABPersonListSearchController, NSString, CNContactListController, CNContactPickerInProccessViewController, NSWindow;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerViewService : NSServiceViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerViewControllerSearch>

@property (retain) CNContactPickerInProccessViewController *inProcessContactPicker;
@property (retain, nonatomic) NSWindow *hostingWindow;
@property (nonatomic) BOOL needsHostingWindow;
@property (weak) id<CNContactPickerInternalResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CNContactListController *contactListController;
@property (readonly) ABPersonListSearchController *searchController;
@property (getter=isSearchFieldVisible) BOOL searchFieldVisible;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setView:(id)a0;
- (void)awakeFromNib;
- (void)loadView;
- (unsigned long long)awakeFromRemoteView;
- (void)addSection:(id)a0;
- (void)setAccounts:(id)a0;
- (void)setPickerScope:(id)a0;
- (void)pickerDidCreate;
- (void)attachViewToHostingWindow:(id)a0;
- (id)initWithNeedsHostingWindow:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 needsHostingWindow:(BOOL)a2;
- (void)performInitialSelection;
- (void)registerSectionsForDraggedTypes:(id)a0;
- (void)resetUsageStatistics;
- (void)setDisplayedKeys:(id)a0;
- (void)showSectionWithIdentifier:(id)a0;
- (void)traceUsageStatistics;

@end
