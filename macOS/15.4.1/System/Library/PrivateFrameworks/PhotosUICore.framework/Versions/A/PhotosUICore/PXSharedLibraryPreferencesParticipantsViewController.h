@class NSLayoutConstraint, NSString, NSArray, PHPhotoLibrary, NSMenu, NSTableView;
@protocol PXSharedLibrary;

@interface PXSharedLibraryPreferencesParticipantsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate, NSPopoverDelegate, PXSharedLibraryParticipantTableViewCellDelegate, PXSharedLibraryParticipantSearchControllerDelegate> {
    PHPhotoLibrary *_photoLibrary;
    NSArray *_participants;
    NSMenu *_actionMenu;
    NSTableView *_tableView;
    NSLayoutConstraint *_scrollViewHeightConstraint;
}

@property (retain, nonatomic) id<PXSharedLibrary> sharedLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)removeParticipant:(id)a0;
- (void)loadView;
- (void)menuNeedsUpdate:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)addParticipants:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)addToContacts:(id)a0;
- (void)showContactCard:(id)a0;
- (void)_showContactCardForParticipant:(id)a0;
- (void)_createContactForParticipant:(id)a0;
- (id)_participantAtSelectedRow;
- (void)_removeParticipant:(id)a0;
- (void)_sendInvitationToEmailAddresses:(id)a0 phoneNumbers:(id)a1;
- (void)_sharedLibraryParticipantsDidChange:(id)a0;
- (void)_updateParticipants;
- (void)_updateScrollViewHeighConstraint;
- (void)commitSharedLibraryParticipantsForSearchController:(id)a0;
- (void)ellipsisClickedForTableViewCell:(id)a0;
- (void)removeClickedForTableViewCell:(id)a0;
- (void)resendInvitation:(id)a0;

@end
