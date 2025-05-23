@class FMLDevice, NSString, FMFDevice;

@interface IMFindMyDevice : NSObject

@property (readonly, nonatomic) FMFDevice *fmfDevice;
@property (readonly, nonatomic) FMLDevice *fmlDevice;
@property (readonly, nonatomic) BOOL isThisDevice;
@property (readonly, nonatomic) NSString *deviceName;

+ (id)deviceWithFMFDevice:(id)a0;
+ (id)deviceWithFMLDevice:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFMFDevice:(id)a0 fmlDevice:(id)a1;

@end
