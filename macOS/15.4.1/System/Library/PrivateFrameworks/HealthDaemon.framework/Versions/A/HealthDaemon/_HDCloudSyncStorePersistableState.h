@class NSString, CKServerChangeToken, NSDictionary, HDSyncIdentity, NSDate;

@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *ownerIdentifier;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) HDSyncIdentity *syncIdentity;
@property (readonly, nonatomic) CKServerChangeToken *serverChangeToken;
@property (readonly, nonatomic) unsigned long long baselineEpoch;
@property (readonly, nonatomic) NSDate *rebaseDeadline;
@property (readonly, nonatomic) NSDate *lastSyncDate;
@property (readonly, nonatomic) NSDictionary *emptyZoneDateByZoneID;
@property (readonly, nonatomic) NSDate *lastCheckDate;
@property (readonly, nonatomic) BOOL hasEncounteredGapInCurrentEpoch;
@property (readonly, nonatomic) int syncProtocolVersion;
@property (readonly, nonatomic) BOOL pendingFullSync;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithServerChangeToken:(id)a0 baselineEpoch:(unsigned long long)a1 rebaseDeadline:(id)a2 lastSyncDate:(id)a3 emptyZones:(id)a4 lastCheckDate:(id)a5 ownerIdentifier:(id)a6 containerIdentifier:(id)a7 syncIdentity:(id)a8 syncProtocolVersion:(int)a9;
- (id)stateByRecordingLastCheckDate:(id)a0;
- (id)stateByRecordingLastSyncDate:(id)a0;
- (id)stateByRequiringUrgentRebase;
- (id)stateByResettingRebaselineDeadline;
- (id)stateWithBaselineEpoch:(unsigned long long)a0;
- (id)stateWithEmptyZones:(id)a0;
- (id)stateWithGapEncountered:(BOOL)a0;
- (id)stateWithPendingFullSync:(BOOL)a0;
- (id)stateWithServerChangeToken:(id)a0;
- (id)stateWithSyncProtocolVersion:(int)a0;

@end
