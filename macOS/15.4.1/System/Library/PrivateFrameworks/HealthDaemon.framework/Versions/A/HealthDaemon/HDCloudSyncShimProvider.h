@class HDCloudSyncSharedSummariesShim, HDCloudSyncSummarySharingEntryShim, HDProfile, HDCloudSyncProfileManagementShim, HDCloudSyncContextSyncShim, HDCloudSyncStateSyncShim;

@interface HDCloudSyncShimProvider : NSObject <HDCloudSyncShimProviderProtocol> {
    HDProfile *_profile;
    HDCloudSyncSummarySharingEntryShim *_summarySharingEntryShim;
    HDCloudSyncStateSyncShim *_stateSyncShim;
    HDCloudSyncProfileManagementShim *_profileManagementShim;
    HDCloudSyncSharedSummariesShim *_sharedSummariesShim;
    HDCloudSyncContextSyncShim *_contextSyncShim;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)contextSyncShim;
- (id)profileManagementShim;
- (id)sharedSummariesShim;
- (id)stateSyncShim;
- (id)summarySharingEntryShim;

@end
