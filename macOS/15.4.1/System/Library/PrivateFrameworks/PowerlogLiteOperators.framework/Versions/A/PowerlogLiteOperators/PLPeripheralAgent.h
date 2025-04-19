@class PLIOKitOperatorComposition, NSDate;

@interface PLPeripheralAgent : PLAgent

@property (retain) NSDate *lastEntryDate;
@property (retain) PLIOKitOperatorComposition *displayPortComposition;
@property (retain) PLIOKitOperatorComposition *displayPortUSBComposition;
@property (retain) PLIOKitOperatorComposition *displayPortTerminatedComposition;
@property (retain) PLIOKitOperatorComposition *USBAddComposition;
@property (retain) PLIOKitOperatorComposition *USBRemoveComposition;
@property (retain) PLIOKitOperatorComposition *thunderboltAddComposition;
@property (retain) PLIOKitOperatorComposition *thunderboltRemoveComposition;
@property (retain) PLIOKitOperatorComposition *externalDisplayAddComposition;
@property (retain) PLIOKitOperatorComposition *externalDisplayRemoveComposition;
@property (retain) PLIOKitOperatorComposition *lidComposition;
@property (retain) PLIOKitOperatorComposition *devPortUsbConnected;
@property (retain) PLIOKitOperatorComposition *devPortCioConnected;
@property (retain) PLIOKitOperatorComposition *devPortUsbDisconnected;

+ (void)load;
+ (id)defaults;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionDisplayPort;
+ (id)entryEventForwardDefinitionUsbPort;
+ (id)entryEventForwardDefinitionsClamshellState;
+ (id)entryEventForwardDefinitionsDeviceState;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (BOOL)SupportsIOSWithVID:(int)a0 andPID:(int)a1;
- (void)initThunderbolt;
- (void)initLid;
- (void)initUSB;
- (void)applyBlock:(void *)a0 withIterator:(unsigned int)a1;
- (void)climbIORegistryForAttribute:(unsigned int)a0 forKey:(struct __CFString { } *)a1 withDepth:(unsigned int)a2 withBlock:(id /* block */)a3;
- (void)deviceChanged:(unsigned long long)a0 withObject:(unsigned int)a1;
- (BOOL)getInt32FromCFobj:(void *)a0 withOutput:(unsigned int *)a1;
- (void)initExternalDisplay;
- (void)logEventForwardClamshellState:(BOOL)a0;
- (void)logEventForwardDeviceState:(const struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a0;
- (void)logEventForwardDisplayPort:(id)a0;
- (BOOL)retrieveDeviceInfoDisplay:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (BOOL)retrieveDeviceInfoThunderbolt:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (BOOL)retrieveDeviceInfoUSB:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (id)retrieveDisplayPortProperties:(unsigned int)a0;

@end
