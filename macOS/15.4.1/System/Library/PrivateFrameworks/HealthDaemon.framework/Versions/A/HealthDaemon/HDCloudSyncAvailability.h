@interface HDCloudSyncAvailability : NSObject

@property (readonly, nonatomic) BOOL shouldPull;
@property (readonly, nonatomic) BOOL shouldPush;
@property (readonly, nonatomic) BOOL shouldSyncMedicalID;
@property (readonly, nonatomic) BOOL shouldSyncSummarySharingPush;
@property (readonly, nonatomic) BOOL shouldSyncSummarySharingPull;
@property (readonly, nonatomic) BOOL shouldSyncAttachments;
@property (readonly, nonatomic) BOOL shouldSyncDeviceContext;
@property (readonly, nonatomic) BOOL shouldSyncStateEntities;

- (void)_setShouldPullWithProfileType:(long long)a0;
- (void)_setShouldPushWithProfileType:(long long)a0;
- (void)_setShouldSyncAttachmentsWithProfileType:(long long)a0;
- (void)_setShouldSyncDeviceContextWithProfileType:(long long)a0;
- (void)_setShouldSyncMedicalIDWithProfileType:(long long)a0;
- (void)_setShouldSyncStateEntitiesWithProfileType:(long long)a0;
- (void)_setShouldSyncSummarySharingPullWithProfileType:(long long)a0 behavior:(id)a1;
- (void)_setShouldSyncSummarySharingPushWithProfileType:(long long)a0 behavior:(id)a1;
- (id)initWithProfileType:(long long)a0 behavior:(id)a1;

@end
