@class NSString, NSNumber, NSUUID;

@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *labelID;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSNumber *userDataPreferred;
@property (retain, nonatomic) NSNumber *userDefaultVoice;
@property (nonatomic) BOOL isSimPresent;
@property (nonatomic) BOOL isSimGood;
@property (nonatomic) BOOL isSimHidden;
@property (nonatomic) BOOL isSimDataOnly;
@property (readonly, nonatomic) long long slotID;
@property (readonly, nonatomic) NSUUID *uuid;

+ (id)contextWithServiceDescriptor:(id)a0;
+ (id)contextWithSlot:(long long)a0;
+ (id)contextWithUUID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)context;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithUUID:(id)a0;
- (id)initWithSlot:(long long)a0;
- (id)initWithUUID:(id)a0 andSlot:(long long)a1;

@end
