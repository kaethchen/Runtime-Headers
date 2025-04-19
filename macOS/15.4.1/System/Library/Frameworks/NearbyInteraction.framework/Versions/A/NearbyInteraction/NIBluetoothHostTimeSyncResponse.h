@interface NIBluetoothHostTimeSyncResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long deviceEventCount;
@property (readonly, nonatomic) unsigned long long uwbDeviceTimeUs;
@property (readonly, nonatomic) unsigned char uwbDeviceTimeUncertainty;
@property (readonly, nonatomic) unsigned char uwbClockSkewMeasurementAvailable;
@property (readonly, nonatomic) unsigned short deviceMaxPpm;
@property (readonly, nonatomic) unsigned char success;
@property (readonly, nonatomic) unsigned short retryDelay;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceEventCount:(unsigned long long)a0 uwbDeviceTimeUs:(unsigned long long)a1 uwbDeviceTimeUncertainty:(unsigned char)a2 uwbClockSkewMeasurementAvailable:(unsigned char)a3 deviceMaxPpm:(unsigned short)a4 success:(unsigned char)a5 retryDelay:(unsigned short)a6;

@end
