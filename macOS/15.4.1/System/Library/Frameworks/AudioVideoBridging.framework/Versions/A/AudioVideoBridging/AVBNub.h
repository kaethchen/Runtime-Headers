@class AVBPTPClock, IOKService, AVBPTPInstance, IOKConnection, NSObject, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface AVBNub : NSObject {
    NSObject<OS_dispatch_queue> *_domainQueue;
    IOKService *_service;
    IOKConnection *_connection;
    TSgPTPClock *_avbDomain;
    AVBPTPClock *_avbPTPClock0;
    AVBPTPInstance *_avbPTPInstance0;
}

@property (readonly) unsigned long long myEntityID;
@property (readonly) unsigned long long dynamicBaseID;
@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) unsigned long long localClockIdentifier;
@property (readonly, nonatomic) AVBPTPClock *avbPTPClock0;
@property (readonly, nonatomic) AVBPTPInstance *avbPTPInstance0;
@property (readonly) TSgPTPClock *avbDomain;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)avbNub;
+ (id)bridgeNameFromBridgeID:(unsigned long long)a0;
+ (BOOL)deviceSupportsAVBControl;
+ (BOOL)deviceSupportsAVBStreaming;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)localizedDescriptionForAcquireModeError:(id)a0;
+ (id)localizedDescriptionForAcquisitionFailure:(unsigned int)a0;
+ (void)notifyWhenNubIsAvailable:(id /* block */)a0;
+ (id)sharedNub;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)logInterfaceStatisticsWithError:(id *)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_addAVB0Instance;
- (BOOL)add17221ACMPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221ADPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add17221AECPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)add1722MAAPServiceToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addAVBClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addClockSyncForIdentifier:(unsigned long long)a0 clientIdentifier:(unsigned int *)a1 error:(id *)a2;
- (BOOL)addMSRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addMVRPClientToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addRequireTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addStreamCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addTimeSyncCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addTimeSyncToInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)addTranslationClockError:(id *)a0;
- (BOOL)callClientCommand:(int)a0 withName:(id)a1 withInterfaceNamed:(id)a2 error:(id *)a3;
- (unsigned long long)dynamicBaseID;
- (BOOL)getDynamicBaseID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)getMyEntityID:(unsigned long long *)a0 error:(id *)a1;
- (unsigned long long)myEntityID;
- (BOOL)nextAvailableDynamicEntityID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)nextAvailableDynamicEntityModelID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)releaseDynamicEntityModelID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)remove17221ACMPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221ADPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove17221AECPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)remove1722MAAPServiceFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeAVBClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeClockSyncForIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeMSRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeMVRPClientFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeRequireTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeStreamCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeTimeSyncCaptureOnInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeTimeSyncFromInterfaceNamed:(id)a0 error:(id *)a1;
- (BOOL)removeTranslationClockError:(id *)a0;
- (BOOL)wantsAudioDriver:(BOOL)a0 withError:(id *)a1;

@end
