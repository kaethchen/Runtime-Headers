@class NSTableView, NSString, NSMenu, PXSharedLibraryButtonBox, PXSharedLibraryParticipantDataSource, PXSharedLibraryParticipantDataSourceManager, NSLayoutConstraint, NSBox;
@protocol PXSharedLibraryParticipantTableViewControllerDelegate;

@interface PXSharedLibraryParticipantTableViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate, PXSectionedDataSourceManagerObserver, PXSharedLibraryParticipantAddTableViewCellDelegate, PXSharedLibraryParticipantTableViewCellDelegate, PXSharedLibraryParticipantSearchControllerDelegate> {
    NSBox *_scrollViewBox;
    PXSharedLibraryButtonBox *_addButtonBox;
    NSLayoutConstraint *_topAddParticipantsToContainerConstraint;
    NSLayoutConstraint *_topAddParticipantsToTableViewConstraint;
    NSLayoutConstraint *_scrollViewHeightConstraint;
}

@property (retain, nonatomic) PXSharedLibraryParticipantDataSource *dataSource;
@property (readonly, nonatomic) NSTableView *tableView;
@property (readonly, nonatomic) NSMenu *actionMenu;
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) double tableViewHeight;
@property (nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled;
@property (weak, nonatomic) id<PXSharedLibraryParticipantTableViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeParticipant:(id)a0;
- (void)loadView;
- (void)menuNeedsUpdate:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 rowActionsForRow:(long long)a1 edge:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)addParticipants:(id)a0;
- (void)addToContacts:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithDataSourceManager:(id)a0;
- (void)showContactCard:(id)a0;
- (void)_updateControls;
- (id)_addCellViewForTableView:(id)a0;
- (void)_deleteParticipantAtIndex:(long long)a0;
- (id)_participantAtSelectedRow;
- (id)_tableView:(id)a0 participantCellViewForRow:(long long)a1;
- (void)_updateAddButton;
- (void)_updateTableViewHeight;
- (void)_updateTableViewLayoutConstraints;
- (void)commitSharedLibraryParticipantsForSearchController:(id)a0;
- (void)didSelectAddTableViewCell:(id)a0;
- (void)ellipsisClickedForTableViewCell:(id)a0;
- (void)removeClickedForTableViewCell:(id)a0;

@end
