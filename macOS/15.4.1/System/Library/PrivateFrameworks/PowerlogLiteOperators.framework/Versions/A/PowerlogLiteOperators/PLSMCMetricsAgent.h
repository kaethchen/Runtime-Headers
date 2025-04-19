@class PLTimer, NSSet, PLEntryNotificationOperatorComposition, NSArray;

@interface PLSMCMetricsAgent : PLAgent

@property struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; BOOL x12; } *smcConnection;
@property double monitorCadence;
@property unsigned int loggingThreshold;
@property unsigned int loggingCounter;
@property (retain) PLTimer *monitorTimer;
@property (retain) PLEntryNotificationOperatorComposition *sbc;
@property (retain) NSSet *loggedKeys;
@property (retain) NSSet *availableKeys;
@property (retain) NSArray *loggedKeysArray;
@property (retain) NSArray *loggedPowerDeliveryCLVRKeysArray;
@property unsigned int powerDeliveryCounter;

+ (void)load;
+ (BOOL)supportsSMC;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (BOOL)anyVirtualTemperatureAboveThreshold;
- (id)getAllKeys;
- (id)getAllowedKeys;
- (id)getPowerDeliveryCLVRKeys;
- (id)getTVKeys;
- (id)handleNonNumericKeys:(unsigned int)a0 keyInfo:(struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; })a1;
- (id)handleNumericKeys:(unsigned int)a0 keyInfo:(struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; })a1 keyName:(id)a2 ret:(char)a3;
- (BOOL)isThermalMitigationAboveThreshold;
- (BOOL)isThermalPressureFanNoiseAboveThreshold;
- (void)logEventPointInstantKeys;
- (void)logPowerDeliveryCLVRKeys;
- (void)logSMCLookUpTable;
- (void)logThermalKeysToCoreAnalytics;
- (void)powerDeliveryCallback;
- (id)readSMCKey:(id)a0;
- (void)thermalMonitorCallback;
- (BOOL)writeSMCKey:(id)a0 withValue:(unsigned long long)a1;

@end
