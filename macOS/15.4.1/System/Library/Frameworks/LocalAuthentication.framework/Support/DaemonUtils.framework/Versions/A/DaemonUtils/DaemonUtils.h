@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)deviceHasDFR;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (void)_enumAllSubrequirements:(struct __ACMRequirement { } *)a0 processingBlock:(id /* block */)a1;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (void)_updateDFRStatus;
+ (void)_updateWithDFRStatus:(unsigned long long)a0 source:(id)a1;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (id)callerIdWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)canCallToDependencies;
+ (BOOL)deviceHasAtLeastSimulatedDFR;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceHasSEP;
+ (BOOL)deviceHasSecureDFR;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (BOOL)deviceIsPoseidon;
+ (BOOL)dfrHardwarePresent;
+ (BOOL)dfrPresent;
+ (unsigned long long)dfrStatus;
+ (void)dispatchOnServer:(id /* block */)a0;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)isAppleSigned:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isClosedLidPreventingUseOfTouchID;
+ (BOOL)isLidClosed;

@end
