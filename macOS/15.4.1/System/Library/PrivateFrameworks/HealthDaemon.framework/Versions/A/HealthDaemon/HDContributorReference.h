@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contributorType;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForOtherUserWithUUID:(id)a0;
+ (id)contributorReferenceForPersistentID:(id)a0;
+ (id)contributorReferenceForPrimaryUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
