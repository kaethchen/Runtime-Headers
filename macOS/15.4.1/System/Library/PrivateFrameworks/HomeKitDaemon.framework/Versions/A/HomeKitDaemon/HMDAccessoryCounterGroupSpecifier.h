@class NSUUID;

@interface HMDAccessoryCounterGroupSpecifier : HMDHouseholdDataEventCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *accessoryUUID;

+ (BOOL)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 accessoryUUID:(id)a2 date:(id)a3;

@end
