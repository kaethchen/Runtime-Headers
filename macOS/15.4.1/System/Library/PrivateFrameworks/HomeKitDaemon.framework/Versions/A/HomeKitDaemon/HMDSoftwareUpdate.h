@class NSUUID, NSString, HMSoftwareUpdateDocumentationMetadata, NSDate, NSArray, HMFMessageDispatcher, NSObject, HMFSoftwareVersion, HMDAccessory, HMDSoftwareUpdateModel;
@protocol OS_dispatch_queue, HMDSoftwareUpdateDataSource;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (copy) NSUUID *identifier;
@property BOOL allowExtraUpdate;
@property BOOL hasRegisteredDocumentationMetadata;
@property (weak) id<HMDSoftwareUpdateDataSource> dataSource;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property (weak) HMDAccessory *accessory;
@property (readonly, copy) HMFSoftwareVersion *version;
@property (readonly, copy) NSString *displayableVersion;
@property (readonly) long long state;
@property (readonly) unsigned long long downloadSize;
@property (readonly) double installDuration;
@property (readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata;
@property (readonly) unsigned long long updateType;
@property unsigned long long needsAttentionReasons;
@property (readonly) NSDate *releaseDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)setState:(long long)a0;
- (id)initWithModel:(id)a0;
- (void)setUpdateType:(unsigned long long)a0;
- (void)setReleaseDate:(id)a0;
- (id)logIdentifier;
- (id)initWithVersion:(id)a0 displayableVersion:(id)a1 downloadSize:(unsigned long long)a2 state:(long long)a3 installDuration:(double)a4 documentationMetadata:(id)a5 releaseDate:(id)a6;
- (id)initWithVersion:(id)a0 downloadSize:(unsigned long long)a1 state:(long long)a2 installDuration:(double)a3 documentationMetadata:(id)a4 releaseDate:(id)a5;
- (id)messageDestination;
- (void)registerForMessages;
- (void)setDocumentationMetadata:(id)a0;
- (void)_handleDocumentationRequest:(id)a0;
- (void)_handleDocumentationStateNotification:(id)a0;
- (void)_handleNeedsAttentionReasonsRequest:(id)a0;
- (void)_handleUpdateDocumentationMetadata:(id)a0;
- (void)_handleUpdateState:(id)a0;
- (void)_updateState:(long long)a0 message:(id)a1 options:(id)a2;
- (void)configureWithAccessory:(id)a0 dataSource:(id)a1 messageDispatcher:(id)a2;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)transactionWithObjectChangeType:(unsigned long long)a0;
- (id)transactionWithObjectChangeType:(unsigned long long)a0 forAccessoryUUID:(id)a1;
- (void)updateLocalState:(long long)a0;

@end
