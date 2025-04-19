@interface GameCenterUI.GameCenterObjcHelper : NSObject

+ (void)fetchRecommendedFriendsWithCompletionHandler:(id /* block */)a0;
+ (void)fetchSuggestedFriendsWithCompletionHandler:(id /* block */)a0;
+ (void)sendFriendInvitationViaPushWithContactID:(id)a0 contactAssociationID:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;

@end
