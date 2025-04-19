@class AVB17221AEMEntity, AVBATDECCController, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface AVBATDECCEntity : NSObject {
    NSMutableArray *_interfaces;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _interfacesLock;
    NSObject<OS_dispatch_source> *_registrationTimer;
    BOOL _sendTimedRegistrations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _acquireLock;
    int _acquireCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockLock;
    int _lockCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controllerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *aecpQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *aecpLimiter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *acmpQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *acmpLimiter;
@property (readonly) BOOL supportsAppleAEMExtensionProtocol;
@property (nonatomic) BOOL supportsMilan;
@property (nonatomic) unsigned int milanProtocolVersion;
@property (nonatomic) BOOL unsolicitedRegistrationFailed;
@property (readonly, nonatomic) BOOL supportsLockEntity;
@property (readonly, nonatomic) BOOL supportsAcquireEntity;
@property (readonly, nonatomic) unsigned long long entityID;
@property (readonly, retain, nonatomic) AVB17221AEMEntity *entityModel;
@property (weak, nonatomic) AVBATDECCController *entityController;
@property (nonatomic, getter=isAcquired) BOOL acquired;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic) BOOL acquiredByThisController;
@property (nonatomic) BOOL acquiredByAnotherController;
@property (nonatomic) unsigned long long acquiredControllerEntityID;
@property (nonatomic) BOOL lockedByThisController;
@property (nonatomic) BOOL lockedByAnotherController;
@property (nonatomic) unsigned long long lockedControllerEntityID;
@property (nonatomic) BOOL registeredForUnsolicitedNotifications;

+ (id)keyPathsForValuesAffectingSupportsAppleAEMExtensionProtocol;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDirectlyConnectedOnInterface:(id)a0;
- (BOOL)_connectListenerEntityID:(unsigned long long)a0 uniqueID:(unsigned short)a1 fromTalkerEntityID:(unsigned long long)a2 uniqueID:(unsigned short)a3 streamingWait:(BOOL)a4 classB:(BOOL)a5 onInterface:(id)a6 withCompletionHandler:(id /* block */)a7;
- (BOOL)_disconnectListenerEntityID:(unsigned long long)a0 uniqueID:(unsigned short)a1 fromTalkerEntityID:(unsigned long long)a2 uniqueID:(unsigned short)a3 onInterface:(id)a4 withCompletionHandler:(id /* block */)a5;
- (BOOL)acquireResultStatus:(unsigned char *)a0 acquiredControllerID:(unsigned long long *)a1 onInterface:(id)a2;
- (BOOL)addEntity:(id)a0 andInterface:(id)a1;
- (void)addressAccessReadAtAddress:(unsigned long long)a0 ofLength:(unsigned long long)a1 appendToData:(id)a2 onInterface:(id)a3 withCompletion:(id /* block */)a4;
- (id)aecpAEMCommandMessageForCommandType:(unsigned short)a0;
- (id)appleAAECommandMessageForCommandType:(unsigned short)a0;
- (void)checkForMilanOnInterface:(id)a0;
- (BOOL)connectInputStreamWithUniqueIndex:(unsigned short)a0 toTalkerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 streamingWait:(BOOL)a3 classB:(BOOL)a4 onInterface:(id)a5 withCompletionHandler:(id /* block */)a6;
- (BOOL)connectOutputStreamWithUniqueIndex:(unsigned short)a0 toListenerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 streamingWait:(BOOL)a3 classB:(BOOL)a4 onInterface:(id)a5 withCompletionHandler:(id /* block */)a6;
- (BOOL)deregisterForUnsolicitedNotificationsOnInterface:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)directReadDescriptorOfType:(unsigned short)a0 withID:(unsigned short)a1 inConfiguration:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (BOOL)disconnectInputStreamWithUniqueIndex:(unsigned short)a0 fromTalkerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (BOOL)disconnectOutputStreamWithUniqueIndex:(unsigned short)a0 fromListenerEntityID:(unsigned long long)a1 uniqueID:(unsigned short)a2 onInterface:(id)a3 withCompletionHandler:(id /* block */)a4;
- (id)entityForInterface:(id)a0;
- (BOOL)enumerateIfNecessaryOnInterface:(id)a0;
- (BOOL)enumerateOnInterface:(id)a0;
- (BOOL)fetchCurrentConfiguration:(unsigned short *)a0 onInterface:(id)a1;
- (BOOL)getInputStreamStateWithUniqueIndex:(unsigned short)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)getOutputStreamConnectionWithUniqueIndex:(unsigned short)a0 andConnectionIndex:(unsigned short)a1 onInterface:(id)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)getOutputStreamStateWithUniqueIndex:(unsigned short)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)hasInterfacesOtherThanInterface:(id)a0;
- (id)initWithEntity:(id)a0 andInterface:(id)a1;
- (id)interfacesOtherThanInterface:(id)a0;
- (BOOL)localInterfaceMatchesRemoteInterfaceDescriptorWithID:(unsigned short)a0 inConfiguration:(unsigned short)a1 onInterface:(id)a2;
- (BOOL)localInterfaceMatchesRemoteInterfaceObject:(id)a0 onInterface:(id)a1;
- (BOOL)lockResultStatus:(unsigned char *)a0 lockedControllerID:(unsigned long long *)a1 onInterface:(id)a2;
- (void)logReadDescriptorFailureOfType:(unsigned short)a0 index:(unsigned short)a1 configuration:(unsigned short)a2 withError:(unsigned char)a3 fromMethodName:(const char *)a4;
- (unsigned short)numberOfAVBInterfacesFromConfigurationID:(unsigned short)a0 onInterface:(id)a1;
- (BOOL)readCurrentConfigurationFromEntityDescriptor:(unsigned short *)a0 onInterface:(id)a1;
- (void)readMemoryObject:(id)a0 onInterface:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)registerForUnsolicitedNotificationsTimeLimited:(BOOL)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)relinquishOnInterface:(id)a0;
- (BOOL)removeInterfaceAnyLeft:(id)a0;
- (BOOL)sendACMPMessage:(id)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)sendAECPMessage:(id)a0 onInterface:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)sendAECPVendorCommandMessage:(id)a0 withTimeout:(long long)a1 onInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)setEntityModel:(id)a0 onInterface:(id)a1;
- (BOOL)unlockOnInterface:(id)a0;

@end
