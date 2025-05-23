@class NSString, NSNumber;

@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *roseFirmwareVersion;
@property (readonly, nonatomic) unsigned char hsiVersionMajor;
@property (readonly, nonatomic) unsigned char hsiVersionMinor;
@property (readonly, nonatomic) unsigned long long hardwareVersion;
@property (copy) NSNumber *addlInfoSize;
@property (copy) NSNumber *apFirmwareVersion;
@property (copy) NSNumber *dspFirmwareVersion;
@property (copy) NSString *target;
@property (copy) NSNumber *calDataVersion;
@property (copy) NSNumber *moduleID;
@property (copy) NSNumber *modemInitVersion;
@property (copy) NSNumber *boardID;
@property (copy) NSString *extraBytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHelloResponse:(const void *)a0;
- (id)initWithRoseFirmwareVersion:(id)a0 hsiVersionMajor:(unsigned char)a1 hsiVersionMinor:(unsigned char)a2 hardwareVersion:(unsigned long long)a3;

@end
