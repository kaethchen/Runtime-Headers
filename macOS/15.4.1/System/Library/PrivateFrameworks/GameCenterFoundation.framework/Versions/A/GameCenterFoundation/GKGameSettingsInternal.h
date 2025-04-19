@class NSString;

@interface GKGameSettingsInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) long long allowFriendListAccess;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allowFriendListAccessString;
- (id)serverAllowFriendListAccessValue;

@end
