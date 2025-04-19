@class KCSharingGroup, NSArray, NSString;

@interface KCSharingGroupUpdateInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) KCSharingGroup *updatedGroup;
@property (readonly, nonatomic) NSArray *addedParticipants;
@property (readonly, nonatomic) NSString *departedGroupID;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDepartedGroupID:(id)a0;
- (id)initWithGroup:(id)a0 addedParticipants:(id)a1;

@end
