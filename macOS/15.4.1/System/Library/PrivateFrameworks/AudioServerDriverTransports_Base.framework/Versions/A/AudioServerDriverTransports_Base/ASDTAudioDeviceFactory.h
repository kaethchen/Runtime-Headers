@class NSString, NSDictionary, ASDTDeviceManager, NSArray, ASDAudioDevice;

@interface ASDTAudioDeviceFactory : NSObject <ASDTIOServiceManagerDelegate, ASDTDeviceInterestProtocol>

@property (retain, nonatomic) NSDictionary *config;
@property (weak, nonatomic) ASDTDeviceManager *manager;
@property (retain, nonatomic) NSString *deviceUID;
@property (retain, nonatomic) NSString *underlyingDeviceUID;
@property (nonatomic) BOOL didRegisterInterestInUnderlyingDevice;
@property (weak, nonatomic) ASDAudioDevice *underlyingDevice;
@property (nonatomic) BOOL deviceIsUnderlying;
@property (nonatomic) BOOL ioServiceDependenciesDiscovered;
@property (retain, nonatomic) NSArray *ioServiceDependencies;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } initTime;
@property (nonatomic) BOOL deviceIsBuilding;
@property (retain, nonatomic) ASDAudioDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;
+ (void)addDependenciesFromConfig:(id)a0 toArray:(id)a1;
+ (void)addDependenciesFromConfigArray:(id)a0 toArray:(id)a1;
+ (id)factoryWithUID:(id)a0 fromList:(id)a1;
+ (id)forDeviceConfig:(id)a0 withManager:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (id).cxx_construct;
- (BOOL)checkDependencies;
- (void)ioServiceAvailable:(id)a0 withManager:(id)a1;
- (BOOL)checkUnderlyingDeviceDependency;
- (void)interestNotification:(int)a0 forDevice:(id)a1;
- (BOOL)buildDevice;
- (BOOL)checkIOServiceDependencies;
- (id)initForDeviceConfig:(id)a0 withManager:(id)a1;
- (int)initializeDevice;
- (void)publishDevice;

@end
