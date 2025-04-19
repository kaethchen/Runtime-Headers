@class NSArray, NSString, NSDictionary, KCSharingParticipant, NSURL;

@interface KCSharingGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long joinState;
@property (readonly, nonatomic) KCSharingParticipant *currentUserParticipant;
@property (readonly, nonatomic) KCSharingParticipant *ownerParticipant;
@property (readonly, nonatomic) NSURL *shareURL;
@property (readonly, nonatomic) BOOL isOwned;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addParticipant:(id)a0;
- (id)initWithGroupID:(id)a0 participants:(id)a1 displayName:(id)a2 shareURL:(id)a3;
- (id)initWithParticipants:(id)a0 displayName:(id)a1;
- (void)removeParticipant:(id)a0;

@end
