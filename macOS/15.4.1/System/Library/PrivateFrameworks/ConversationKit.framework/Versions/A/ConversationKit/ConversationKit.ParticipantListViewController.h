@interface ConversationKit.ParticipantListViewController : PlatformViewController <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ participantListLayout;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ lastLayedOutViewSize;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantListViewControllerDelegate;
    void /* unknown type, empty encoding */ recentlyVisibleParticipantIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)accessibilityParticipantCollectionView;
- (void)handleScrollViewBoundsDidChangedNotificationWithNotification:(id)a0;

@end
