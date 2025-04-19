@class NSString, NSUUID, NSError, NSDate;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSUUID *commandIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 lastUpdated:(id)a1 error:(id)a2 state:(long long)a3;

@end
