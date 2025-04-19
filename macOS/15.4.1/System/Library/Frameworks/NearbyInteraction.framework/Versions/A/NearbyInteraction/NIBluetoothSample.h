@class NSString, NSData;

@interface NIBluetoothSample : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *partIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *presenceConfigData;
@property (readonly) double rssi;
@property (readonly) NSString *identifier;
@property (readonly) NSString *model;
@property (readonly) int channel;
@property (readonly) double machContinuousTimeSeconds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithBluetoothSample:(id)a0;
- (id)initWithRSSI:(double)a0 identifier:(id)a1 model:(id)a2 channel:(int)a3 machContinuousTimeSeconds:(double)a4;
- (id)initWithRSSI:(double)a0 identifier:(id)a1 model:(id)a2 channel:(int)a3 machContinuousTimeSeconds:(double)a4 partIdentifier:(id)a5 name:(id)a6 presenceConfigData:(id)a7;

@end
