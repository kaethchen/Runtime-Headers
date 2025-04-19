@class NSTextField, NSString, NSArray, NSItemProvider, NSToolbarItem, WBTabGroup, NSStackView, _SWCollaborationToolbarItem, NSLayoutConstraint, NSTableView;
@protocol CollaborationToolbarItemDelegate;

@interface CollaborationToolbarItem : NSObject <NSCloudSharingServiceDelegate, NSTableViewDataSource, NSTableViewDelegate, WBTabGroupManagerObserver, WBTabGroupSyncAgentSyncObserver> {
    _SWCollaborationToolbarItem *_collaborateItem;
    NSItemProvider *_itemProvider;
    NSTableView *_tableView;
    NSStackView *_containerView;
    NSTextField *_participantsHeader;
    NSLayoutConstraint *_heightConstraint;
    NSArray *_contacts;
    BOOL _isShowingManageShare;
}

@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) NSToolbarItem *toolbarItem;
@property (weak, nonatomic) id<CollaborationToolbarItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemProviderForTabGroup:(id)a0 window:(id)a1;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)sharingService:(id)a0 didCompleteForItems:(id)a1 error:(id)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)_createParticipantsHeader;
- (id)_createSeparator;
- (id)_createStackViewWithSubviews:(id)a0;
- (void)_createTableView;
- (void)_setActiveShareParticipants:(id)a0;
- (void)_showManageSharedTabGroup;
- (BOOL)_tableViewRowIsManageShareButton:(long long)a0;
- (BOOL)_tableViewRowIsSeparator:(long long)a0;
- (void)_updateShareParticipants;
- (id)initWithTabGroup:(id)a0;
- (void)menuTableView:(id)a0 mouseUpInRow:(long long)a1;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;
- (void)tabGroupManager:(id)a0 didUpadateActiveParticipants:(id)a1 inTabGroupWithUUID:(id)a2;

@end
