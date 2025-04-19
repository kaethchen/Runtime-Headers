@class NSTextField, CKShareMetadata, NSTouchBar, NSString, CKInitiateParticipantVettingOperation, CKContainer, iCloudTouchBarController, NSDictionary, NSWindow, NSButton, NSTableView;

@interface MMOutOfNetworkSheetController : NSObject <NSTouchBarProvider, NSTableViewDataSource, NSTableViewDelegate>

@property (retain) CKContainer *clouddContainer;
@property (retain) CKContainer *metadataSpecifiedContainer;
@property (retain) CKShareMetadata *shareMetadata;
@property (retain) CKInitiateParticipantVettingOperation *operation;
@property (retain) iCloudTouchBarController *touchBarController;
@property (retain) NSWindow *outOfNetworkSheet;
@property (weak) NSTableView *emailAddressTable;
@property (weak) NSButton *verifyButton;
@property (weak) NSButton *cancelButton;
@property (weak) NSTextField *titleText;
@property (weak) NSTextField *contactOwnerText;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSDictionary *userInfo;
@property NSWindow *parentWindow;
@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelButtonPressed:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)help:(id)a0;
- (id)alertContentForInitiateVettingError:(id)a0 shareTitle:(id)a1 isEmail:(BOOL)a2 address:(id)a3;
- (void)showOutOfNetworkSheetForServices:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissOutOfNetworkSheet;
- (void)initiateVettingForParticipantID:(id)a0 address:(id)a1 andThen:(id /* block */)a2;
- (BOOL)isShowingSheet;
- (BOOL)isVettedToSelfError:(id)a0;
- (void)showFailureAlert:(id)a0;
- (void)verifyButtonPressed:(id)a0;

@end
