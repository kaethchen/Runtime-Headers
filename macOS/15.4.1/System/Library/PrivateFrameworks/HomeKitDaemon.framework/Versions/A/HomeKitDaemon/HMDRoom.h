@class HMDHome, NSString, NSDictionary, HMFMessageDispatcher, NSUUID, NSObject, HMDApplicationData;
@protocol OS_dispatch_queue;

@interface HMDRoom : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, HMDApplicationDataContainer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)messageBindingsForDispatcher:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)privateDescription;
- (id)zones;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)messageDestination;
- (void)_handleUpdateRoomModel:(id)a0 message:(id)a1;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)_handleRenameRequest:(id)a0;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (void)_registerForMessages;
- (id)backingStoreObjects:(long long)a0;
- (void)configure:(id)a0 queue:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end
