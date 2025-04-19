@class NSString, NSArray, ASDTCondition, NSMutableDictionary, NSDictionary, NSThread, NSMutableSet, NSMutableArray, ASDPlugin, NSSet;
@protocol ASDTDeviceManagerDelegate;

@interface ASDTDeviceManager : ASDTDeviceList <ASDTIOServiceManagerDelegate, ASDTSystemPowerNotifierDelegate, ASDTUserActivityManagerProtocol>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *configuration;
@property (weak, nonatomic) id<ASDTDeviceManagerDelegate> delegate;
@property (weak, nonatomic) ASDPlugin *plugin;
@property (retain, nonatomic) NSMutableSet *deviceFactories;
@property (retain, nonatomic) NSMutableDictionary *matchedDeviceFactories;
@property (retain, nonatomic) NSMutableArray *ioServiceDependencies;
@property (nonatomic) unsigned int numDevicesToInitialize;
@property (retain, nonatomic) NSMutableDictionary *deviceInitStatus;
@property (retain, nonatomic) ASDTCondition *initializingCond;
@property (retain, nonatomic) NSThread *thread;
@property (retain, nonatomic) ASDTCondition *threadCond;
@property (nonatomic) BOOL threadWorkToDo;
@property (nonatomic) BOOL threadStarted;
@property (retain, nonatomic) NSMutableSet *devicesRunning;
@property (retain, nonatomic) NSSet *underlyingDeviceUIDs;
@property (nonatomic) double runningLogPeriod;
@property (nonatomic) BOOL userIsActive;
@property (nonatomic) BOOL verboseDeviceLogging;
@property (readonly, nonatomic) NSArray *allDeviceFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceManagerWithConfig:(id)a0 withDelegate:(id)a1;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)systemWillSleep;
- (void)removeAudioDevice:(id)a0;
- (void)stopThread;
- (void)systemHasPoweredOn;
- (void)removeAudioDevices:(id)a0;
- (void)ioServiceAvailable:(id)a0 withManager:(id)a1;
- (BOOL)addAudioDeviceWithCheck:(id)a0;
- (BOOL)allowSystemSleep;
- (void)buildAndInitializeDevice:(id)a0;
- (void)configureDevices;
- (void)deviceConfigurationFailed:(id)a0;
- (void)deviceInitializationFailed:(id)a0;
- (void)deviceInitialized:(id)a0 withStatus:(int)a1;
- (id)factoryForDeviceUID:(id)a0;
- (id)generateUnderlyingDeviceUIDsFromConfig:(id)a0;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1;
- (void)initializeDevice:(id)a0;
- (void)ioServiceWillTerminate:(id)a0 withManager:(id)a1;
- (void)lockedSignalThread;
- (void)logStatsForDevice:(id)a0 withPowerState:(int)a1;
- (id)messageForDroppedPacketsFromDevice:(id)a0 withScope:(unsigned int)a1;
- (id)messageForDroppedPacketsFromDevice:(id)a0 withScope:(unsigned int)a1 andElement:(unsigned int)a2;
- (void)powerStateChangedForDevice:(id)a0 toState:(int)a1;
- (void)publishDevice:(id)a0;
- (void)publishDeviceLocked:(id)a0;
- (void)resourcesAvailableForDevice:(id)a0;
- (void)terminateDevice:(id)a0;
- (void)threadLoop:(id)a0;
- (void)waitForInitialization;
- (void)waitForInitializationWithTimeoutUs:(unsigned int)a0;
- (void)waitForThreadStart;

@end
