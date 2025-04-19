@class NSString;

@interface IRAVOutputDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasAirplayProperties;
@property (readonly, nonatomic) BOOL discoveredOverInfra;
@property (readonly, nonatomic) BOOL discoveredWithBroker;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, nonatomic) unsigned long long deviceSubType;

+ (id)AVOutputDeviceToDO:(id)a0;
+ (id)aVOutputDeviceDOWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(BOOL)a3 discoveredOverInfra:(BOOL)a4 discoveredWithBroker:(BOOL)a5 deviceType:(unsigned long long)a6 deviceSubType:(unsigned long long)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementDeviceID:(id)a0;
- (id)copyWithReplacementDeviceName:(id)a0;
- (id)copyWithReplacementDeviceSubType:(unsigned long long)a0;
- (id)copyWithReplacementDeviceType:(unsigned long long)a0;
- (id)copyWithReplacementDiscoveredOverInfra:(BOOL)a0;
- (id)copyWithReplacementDiscoveredWithBroker:(BOOL)a0;
- (id)copyWithReplacementHasAirplayProperties:(BOOL)a0;
- (id)copyWithReplacementModelID:(id)a0;
- (id)exportAsDictionary;
- (id)initWithDeviceID:(id)a0 modelID:(id)a1 deviceName:(id)a2 hasAirplayProperties:(BOOL)a3 discoveredOverInfra:(BOOL)a4 discoveredWithBroker:(BOOL)a5 deviceType:(unsigned long long)a6 deviceSubType:(unsigned long long)a7;
- (BOOL)isEqualToAVOutputDeviceDO:(id)a0;

@end
