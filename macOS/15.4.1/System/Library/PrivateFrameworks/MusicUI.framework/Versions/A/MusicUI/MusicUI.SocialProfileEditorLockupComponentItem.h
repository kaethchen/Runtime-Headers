@interface MusicUI.SocialProfileEditorLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ isValid;
    void /* unknown type, empty encoding */ scopeIdentifier;
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ initialSocialProfileSharedPlaylistIDs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_photoClickGestureRecognizer;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ editableFormCoordinator;
    void /* unknown type, empty encoding */ initialHideListeningToState;
    void /* unknown type, empty encoding */ hideListeningTo;
    void /* unknown type, empty encoding */ initialIsPrivateState;
    void /* unknown type, empty encoding */ userSelectedPhotoData;
    void /* unknown type, empty encoding */ confirmChangesBackgroundView;
    void /* unknown type, empty encoding */ headerDescriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nameTextField;
    void /* unknown type, empty encoding */ usernameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_usernameTextField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteProfileButton;
    void /* unknown type, empty encoding */ chooseWhoCanFollowLabel;
    void /* unknown type, empty encoding */ topSeparatorView;
    void /* unknown type, empty encoding */ middleSeparatorView;
    void /* unknown type, empty encoding */ bottomSeparatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraIconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_everyoneRadioButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peopleYouApproveRadioButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_additionalPrivacySettingsButton;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityLabel;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillLayout;
- (void)onAdditionalPrivacySettingsButtonClicked:(id)a0;
- (void)onCancelButtonClicked:(id)a0;
- (void)onDeleteProfileButtonClicked:(id)a0;
- (void)onDoneButtonClicked:(id)a0;
- (void)onPhotoViewClicked:(id)a0;
- (void)onRadioButtonClicked:(id)a0;

@end
