@class HKContextSyncRequest, NSUUID, HKChangesSyncRequest, HKMedicalIDSyncRequest, HKSummarySharingSyncRequest, HKStateSyncRequest;

@interface HKCloudSyncRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) HKChangesSyncRequest *changesSyncRequest;
@property (readonly, nonatomic) HKContextSyncRequest *contextSyncRequest;
@property (readonly, nonatomic) HKStateSyncRequest *stateSyncRequest;
@property (readonly, nonatomic) HKMedicalIDSyncRequest *medicalIDSyncRequest;
@property (readonly, nonatomic) HKSummarySharingSyncRequest *summarySharingSyncRequest;
@property (readonly, nonatomic) BOOL allowCellular;
@property (readonly, nonatomic) long long qualityOfService;

+ (id)emptySyncRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithChangesSyncRequest:(id)a0;
- (id)initWithChangesSyncRequest:(id)a0 contextSyncRequest:(id)a1 stateSyncRequest:(id)a2 medicalIDSyncRequest:(id)a3 summarySharingSyncRequest:(id)a4;
- (id)initWithChangesSyncRequest:(id)a0 contextSyncRequest:(id)a1 stateSyncRequest:(id)a2 medicalIDSyncRequest:(id)a3 summarySharingSyncRequest:(id)a4 allowCellular:(BOOL)a5 qualityOfService:(long long)a6;
- (id)initWithContextSyncRequest:(id)a0;
- (id)initWithIdentifier:(id)a0 changesSyncRequest:(id)a1 contextSyncRequest:(id)a2 stateSyncRequest:(id)a3 medicalIDSyncRequest:(id)a4 summarySharingSyncRequest:(id)a5 allowCellular:(BOOL)a6 qualityOfService:(long long)a7;
- (id)initWithMedicalIDSyncRequest:(id)a0;
- (id)initWithStateSyncRequest:(id)a0;
- (id)initWithSummarySharingSyncRequest:(id)a0;
- (BOOL)matchesFilter:(unsigned long long)a0;
- (id)requestByMergingRequest:(id)a0;

@end
