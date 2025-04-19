@class NSUUID;

@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID;

+ (BOOL)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupName:(id)a0 homeUUID:(id)a1 date:(id)a2;

@end
