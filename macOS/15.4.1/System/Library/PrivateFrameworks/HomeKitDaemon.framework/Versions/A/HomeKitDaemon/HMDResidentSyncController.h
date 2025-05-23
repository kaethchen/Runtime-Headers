@class HMDManagedObjectContext, NSUUID, NSString, HMDManagedObjectCodingModel, HMFVersion, NSObject, NSNotificationCenter, HMDHome;
@protocol OS_dispatch_queue;

@interface HMDResidentSyncController : NSObject <HMFMessageReceiver, HMFLogging> {
    HMDHome *_home;
    NSUUID *_homeUUID;
    HMDManagedObjectCodingModel *_codingModel;
    HMDManagedObjectContext *_context;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly) HMFVersion *schemaVersion;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)context;
- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)changeToken:(id)a0 isAheadOf:(id)a1;
- (id)decodeToken:(id)a0 error:(id *)a1;
- (id)encodeToken:(id)a0 error:(id *)a1;
- (id)initWithHome:(id)a0 codingModel:(id)a1 notificationCenter:(id)a2 persistence:(id)a3;

@end
