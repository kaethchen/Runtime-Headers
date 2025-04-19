@class NSSet;

@interface ATXContactRelationshipsCollector : NSObject

@property (readonly, nonatomic) NSSet *cnContactIdsOfEmergencyContacts;
@property (readonly, nonatomic) NSSet *vipContactEmailAddresses;
@property (readonly, nonatomic) NSSet *cnContactIdsOfICloudFamilyMembers;
@property (readonly, nonatomic) NSSet *cnContactIdsOfFavoriteContacts;
@property (readonly, nonatomic) NSSet *cnContactIdsOfPinnedChatsInMessage;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;

@end
