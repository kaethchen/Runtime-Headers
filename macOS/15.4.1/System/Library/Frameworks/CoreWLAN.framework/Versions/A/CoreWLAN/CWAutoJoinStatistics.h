@class NSString, NSArray, NSDate, NSError, NSNumber;

@interface CWAutoJoinStatistics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *interfaceName;
@property long long trigger;
@property (copy) NSDate *startedAt;
@property (copy) NSDate *endedAt;
@property (copy) NSArray *joinAttempts;
@property long long scannedChannelCount;
@property double scanDuration;
@property (copy) NSError *error;
@property BOOL result;
@property (readonly, nonatomic) NSNumber *totalDuration;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAutoJoinStatistics:(id)a0;

@end
