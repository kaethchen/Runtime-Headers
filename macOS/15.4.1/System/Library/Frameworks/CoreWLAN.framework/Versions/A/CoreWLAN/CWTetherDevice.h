@class NSString, NSNumber;

@interface CWTetherDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceIdentifier;
@property (copy) NSString *deviceName;
@property (copy) NSNumber *batteryLife;
@property (copy) NSNumber *signalStrength;
@property unsigned long long networkType;
@property unsigned long long deviceGroup;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToTetherDevice:(id)a0;

@end
