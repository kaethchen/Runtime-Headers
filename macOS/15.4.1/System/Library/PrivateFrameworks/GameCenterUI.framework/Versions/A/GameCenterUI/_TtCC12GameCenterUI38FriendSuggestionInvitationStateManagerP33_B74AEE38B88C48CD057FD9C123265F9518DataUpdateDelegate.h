@interface _TtCC12GameCenterUI38FriendSuggestionInvitationStateManagerP33_B74AEE38B88C48CD057FD9C123265F9518DataUpdateDelegate : NSObject <GKDaemonProxyDataUpdateDelegate> {
    void /* unknown type, empty encoding */ updateBlock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)refreshFromFriendRecommendationsNotification:(id)a0;
- (void)refreshFromMessageBasedFriendRequestSent:(id)a0;

@end
