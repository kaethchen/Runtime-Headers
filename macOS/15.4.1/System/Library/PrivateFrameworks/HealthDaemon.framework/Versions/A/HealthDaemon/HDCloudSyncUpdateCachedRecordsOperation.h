@class NSArray, HDSynchronousTaskGroup, NSString, NSMutableSet;

@interface HDCloudSyncUpdateCachedRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableSet *_invalidRecordIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSArray *zoneIdentifiersWithIdentityLost;
@property (readonly, copy, nonatomic) NSArray *invalidRecordIDs;
@property (readonly, nonatomic) HDSynchronousTaskGroup *taskGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)fetchRecordZoneChangesForContainer:(id)a0 database:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
