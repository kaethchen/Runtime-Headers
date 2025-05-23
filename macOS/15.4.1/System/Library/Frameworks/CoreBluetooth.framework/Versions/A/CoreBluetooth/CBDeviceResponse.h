@class NSString;

@interface CBDeviceResponse : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char btBand;
@property (nonatomic) unsigned short connectionHandle;
@property (nonatomic) char core0TargetPower;
@property (nonatomic) char core1TargetPower;
@property (nonatomic) char currentPCAP;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) char rssi;
@property (nonatomic) unsigned int sniffInterval;
@property (nonatomic) char txPower;
@property (nonatomic) char txPowerMax;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
