@class NSString, CNContact;

@interface GKSuggestedFriend : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *contactAssociationID;
@property (readonly, nonatomic) BOOL supportsFriendingViaPush;

- (void).cxx_destruct;
- (id)initWithContact:(id)a0 contactAssociationID:(id)a1 supportsFriendingViaPush:(BOOL)a2;

@end
