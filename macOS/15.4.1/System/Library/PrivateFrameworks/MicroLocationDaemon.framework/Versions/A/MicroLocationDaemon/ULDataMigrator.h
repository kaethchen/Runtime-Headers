@class NSString;

@interface ULDataMigrator : NSObject <CLLocationManagerDelegate>

@property (nonatomic) struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *localDb;
@property (nonatomic) void *eventLogger;
@property struct IDataProtectionDelegate { void /* function */ **x0; } *dataProtectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)migrateMiloData;
- (BOOL)_checkKeybagUnlocked;
- (id)_createLocationManagerWithMicroLocationBundle;
- (id)_exportMiloDataFromLocationd:(id)a0;
- (long long)_getCAMigrationErrorTypeForLastMigrationStateAfterMaxFailures:(int)a0;
- (id)_getPreviouslyExportedFileIfExistsAtPath:(id)a0;
- (BOOL)_initializeMigrationStatusMetricsDict:(id)a0 forType:(long long)a1;
- (BOOL)_migrateMiloDataFromLocationd;
- (BOOL)_migrateMiloDataTransaction;
- (void)_sendCoreAnalyticsEventForMigrationIfNecessary:(long long)a0;
- (id)initWithLocalDb:(struct ULDatabase { void /* function */ **x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; unsigned int x17; id x18; } *)a0 dataProtectionDelegate:(struct IDataProtectionDelegate { void /* function */ **x0; } *)a1 andEventLogger:(void *)a2;

@end
