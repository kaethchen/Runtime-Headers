@interface MusicUI.SocialOnboardingFindFriendsPageComponentItem : NSCollectionViewItem <NSSharingServicePickerDelegate> {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharingServicePicker;
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ socialProfileID;
    void /* unknown type, empty encoding */ isInviteContact;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contactStore;
    void /* unknown type, empty encoding */ contactIdentifier;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)onButtonClicked:(id)a0;

@end
