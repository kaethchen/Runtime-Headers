@class MIDICIDeviceInfo, NSNumber;

@interface MIDICIDiscoveredNode : NSObject <NSSecureCoding> {
    unsigned int _maxSysExSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int destination;
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo;
@property (readonly, nonatomic) BOOL supportsProfiles;
@property (readonly, nonatomic) BOOL supportsProperties;
@property (readonly, nonatomic) NSNumber *maximumSysExSize;

+ (id)description;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDestination:(unsigned int)a0 deviceID:(struct MIDICIDeviceIdentification { unsigned char x0[3]; unsigned char x1[2]; unsigned char x2[2]; unsigned char x3[4]; unsigned char x4[5]; })a1 profilesSupported:(BOOL)a2 propertiesSupported:(BOOL)a3 maxSysExSize:(unsigned int)a4;

@end
