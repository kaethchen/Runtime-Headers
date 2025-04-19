@class NSUUID, NSDate;

@interface SMDeviceStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long batteryRemaining;
@property (nonatomic) unsigned long long cellularStrength;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long wifiStrength;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 batteryRemaining:(long long)a1 cellularStrength:(unsigned long long)a2 date:(id)a3 wifiStrength:(unsigned long long)a4;
- (id)outputToDictionary;

@end
