@interface MusicUI.UserSocialProfileCoordinator : NSObject {
    void /* unknown type, empty encoding */ socialOnboardingUserAttributes;
    void /* unknown type, empty encoding */ pendingUserSelectedPhotoData;
    void /* unknown type, empty encoding */ socialOnboardingFriendIDsToRequest;
    void /* unknown type, empty encoding */ socialProfileSharedPlaylistIDs;
    void /* unknown type, empty encoding */ userNotificationSettings;
    void /* unknown type, empty encoding */ publicSocialProfileID;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ onUserProfileDidChange;
    void /* unknown type, empty encoding */ onUserOnboardedStatusHasChanged;
    void /* unknown type, empty encoding */ onUserSharedPlaylistsDidChange;
    void /* unknown type, empty encoding */ onUserDidHideListeningHistoryContent;
    void /* unknown type, empty encoding */ onListeningToShelfVisibilityDidChange;
    void /* unknown type, empty encoding */ onSocialOnboardingSharedPlaylistsHidden;
    void /* unknown type, empty encoding */ _userSocialProfile;
    void /* unknown type, empty encoding */ userSocialProfileDescriptor;
    void /* unknown type, empty encoding */ isUserOnboarded;
    void /* unknown type, empty encoding */ isCollaborationAllowed;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ isContactCheckAllowed;
    void /* unknown type, empty encoding */ isDiscoverableByContact;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ isOfflineObjectGraph;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ accountDidChangeObserver;
}

- (id)init;
- (void).cxx_destruct;

@end
