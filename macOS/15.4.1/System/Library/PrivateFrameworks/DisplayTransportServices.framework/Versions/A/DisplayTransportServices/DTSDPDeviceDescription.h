@protocol DTSDisplayPortDeviceInfo;

@interface DTSDPDeviceDescription : NSObject <DTSDeviceDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly, nonatomic) unsigned int port;
@property (readonly, nonatomic) unsigned int framebufferIndex;
@property (readonly, nonatomic) id<DTSDisplayPortDeviceInfo> info;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescription:(id)a0;
- (id)initWithRegistryEntryID:(unsigned long long)a0 port:(unsigned int)a1 framebufferIndex:(unsigned int)a2 info:(id)a3;

@end
