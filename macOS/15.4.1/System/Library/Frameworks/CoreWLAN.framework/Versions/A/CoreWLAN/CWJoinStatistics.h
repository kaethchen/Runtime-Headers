@class NSNumber, NSString, CWNetwork, NSDate, CWNetworkProfile, NSError;

@interface CWJoinStatistics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *interfaceName;
@property (copy) NSString *processName;
@property (copy) CWNetwork *network;
@property (copy) CWNetworkProfile *profile;
@property (copy) NSDate *startedAt;
@property (copy) NSDate *assocEndedAt;
@property (copy) NSDate *authEndedAt;
@property (copy) NSDate *ipAssignedAt;
@property (copy) NSDate *endedAt;
@property (copy) NSError *error;
@property BOOL result;
@property (readonly, nonatomic) NSNumber *ipDuration;
@property (readonly, nonatomic) NSNumber *authDuration;
@property (readonly, nonatomic) NSNumber *assocDuration;
@property (readonly, nonatomic) NSNumber *joinDuration;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToJoinStatistics:(id)a0;

@end
