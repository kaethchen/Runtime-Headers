@interface ConversationKit.InCallControlsViewController : PlatformViewController <NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantDelegate;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ gridLayoutStyle;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ capabilitiesChecker;
    void /* unknown type, empty encoding */ addPersonTappedCallBack;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ isLinkSharingSupported;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ footerCellView;
    void /* unknown type, empty encoding */ updateDataSourceSubject;
    void /* unknown type, empty encoding */ updateDataSourceDebouncer;
}

@property (nonatomic) void /* unknown type, empty encoding */ isExpanded;
@property (nonatomic) void /* unknown type, empty encoding */ isScreenSharing;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (id)accessibilityParticipantCollectionView;
- (void)handleContactStoreDidChangeWithNotification:(id)a0;

@end
