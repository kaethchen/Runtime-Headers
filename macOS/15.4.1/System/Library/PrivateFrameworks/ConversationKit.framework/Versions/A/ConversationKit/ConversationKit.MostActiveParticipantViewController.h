@interface ConversationKit.MostActiveParticipantViewController : PlatformViewController {
    void /* unknown type, empty encoding */ remoteParticipants;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ ignoreFocusedParticipantUpdates;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteParticipantView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localParticipantView;
    void /* unknown type, empty encoding */ localParticipantViewConstraints;
    void /* unknown type, empty encoding */ shouldShowActionTypePhotoCapture;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ isVisibleInPIP;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
