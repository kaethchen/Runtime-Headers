@class HMDApplicationData, NSString, NSArray, NSUUID, NSMutableDictionary, NSDictionary, HMFMessageDispatcher, NSObject, NSMutableArray, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDServiceGroup : HMFObject <HMFLogging, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol, HMDApplicationDataContainer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_serviceUUIDs;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *serviceMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (retain, nonatomic) HMDApplicationData *appData;
@property (readonly, copy) NSArray *serviceUUIDs;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) NSUUID *spiClientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeService:(id)a0;
- (id)logIdentifier;
- (id)dumpState;
- (void)_handleAddServiceRequest:(id)a0;
- (void)_handleRemoveAppDataModel:(id)a0 message:(id)a1;
- (void)_handleRemoveServiceRequest:(id)a0;
- (void)_handleRenameRequest:(id)a0;
- (void)_handleUpdateAppDataModel:(id)a0 message:(id)a1;
- (void)_handleUpdateServicesTransaction:(id)a0;
- (void)_registerForMessages;
- (void)_transactionServiceGroupUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)backingStoreObjects:(long long)a0;
- (void)configure:(id)a0 queue:(id)a1;
- (void)fixupServiceGroup;
- (void)fixupServicesForReplacementAccessory:(id)a0;
- (id)initWithName:(id)a0 uuid:(id)a1 home:(id)a2 queue:(id)a3;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (void)removeServicesForAccessory:(id)a0;
- (void)setServiceIfPresent:(id)a0;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)updateServiceGroupWithModel:(id)a0 message:(id)a1;

@end
