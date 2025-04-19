@interface MusicUI.SocialProfileDetailHeaderLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ backgroundBlurView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ socialRelationshipButtonController;
    void /* unknown type, empty encoding */ onFollowStateDidChangeEventSubscription;
    void /* unknown type, empty encoding */ onUserProfileDidChangeEventSubscription;
    void /* unknown type, empty encoding */ isUserSocialProfile;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contextMenuButton;
    void /* unknown type, empty encoding */ menuPresenter;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillLayout;

@end
