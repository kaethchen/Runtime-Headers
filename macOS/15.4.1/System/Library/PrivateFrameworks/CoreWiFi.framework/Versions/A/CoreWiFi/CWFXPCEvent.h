@class NSUUID, NSString, NSDictionary, NSDate;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long type;
@property (nonatomic) long long internalType;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDictionary *info;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long acknowledgementTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)__descriptionForEventType;
- (BOOL)isEqualToXPCEvent:(id)a0;

@end
