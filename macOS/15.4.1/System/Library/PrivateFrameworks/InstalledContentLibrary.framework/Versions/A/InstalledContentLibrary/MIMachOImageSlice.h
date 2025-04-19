@interface MIMachOImageSlice : NSObject

@property (nonatomic) int cpuType;
@property (nonatomic) int cpuSubtype;
@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) unsigned int minOSVersion;

- (id)description;
- (id)initWithCPUType:(int)a0 cpuSubtype:(int)a1 platform:(unsigned int)a2 sdkVersion:(unsigned int)a3 minOSVersion:(unsigned int)a4;

@end
