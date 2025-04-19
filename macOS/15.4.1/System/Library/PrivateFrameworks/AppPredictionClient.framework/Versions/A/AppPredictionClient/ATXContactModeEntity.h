@class NSString, ATXModeEntityScore;

@interface ATXContactModeEntity : NSObject <ATXModeEntityProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *displayName;
@property (retain) NSString *rawIdentifier;
@property (retain) NSString *cnContactId;
@property (retain) NSString *stableContactIdentifier;
@property (retain, nonatomic) ATXModeEntityScore *scoreMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cnContactIdsOfEmergencyContacts;
+ (id)cnContactIdsOfFavoriteContactsWithContactStore:(id)a0;
+ (id)cnContactIdsOfICloudFamilyMembers;
+ (id)vipContactEmailAddresses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2;
- (id)initWithDisplayName:(id)a0 rawIdentifier:(id)a1 cnContactId:(id)a2 stableContactIdentifier:(id)a3;
- (BOOL)isVIPContactGivenVIPs:(id)a0 contactStore:(id)a1;

@end
