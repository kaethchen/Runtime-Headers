@class NSNumber, NSString, SMEngine, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMEngineDelegateProxy : NSObject <SMNWirelessChangesProtocol, MigrationProgressEventsListener>

@property (retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain) NSMutableArray *delegates;
@property (weak) SMEngine *engine;
@property BOOL toAnotherMac;
@property BOOL attemptingWirelessNetworkSwitch;
@property BOOL manualWirelessNetworkSwitch;
@property BOOL connectedToAP;
@property (retain) NSString *wirelessSSID;
@property (retain) NSString *wirelessPassword;
@property (retain) NSString *lastProcessingText;
@property (retain) NSNumber *lastPercentDone;
@property (retain) NSNumber *lastMinutesRemaining;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithEngine:(id)a0;
- (void)disassociatedFromCurrentNetwork;
- (void)associatedWithWirelessNetwork:(id)a0;
- (void)attemptingWirelessNetworkSwitch:(BOOL)a0 manual:(BOOL)a1;
- (void)connectedToWirelessNetwork:(BOOL)a0;
- (void)didAttemptWirelessNetworkSwitch:(BOOL)a0;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)enginePercentDone:(id)a0;
- (void)engineProcessingText:(id)a0;
- (void)engineProgressUpdate:(id)a0;
- (void)engineSetToAnotherMac:(BOOL)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineStateChanged:(unsigned long long)a0;
- (void)engineStatus:(id)a0 arguments:(id)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (void)willAttemptWirelessNetworkSwitch:(BOOL)a0;
- (void)wirelessAccessPointCreated:(id)a0 password:(id)a1;
- (void)wirelessAccessPointDestroyed;

@end
