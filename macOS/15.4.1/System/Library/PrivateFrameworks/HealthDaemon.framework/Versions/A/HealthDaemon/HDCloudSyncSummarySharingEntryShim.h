@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncSummarySharingEntryShim : NSObject <HDCloudSyncSummarySharingEntryShimProtocol> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)authorizationIdentifiersByContactIdentifierForParticipants:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)authorizationIdentifiersForEntriesNotExistingParticipants:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)codableEntryWithUUID:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)disableAllSharingEntriesWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)insertOrReplaceCodableSharingEntries:(id)a0 shouldResolveCNContact:(BOOL)a1 completion:(id /* block */)a2;
- (void)pauseStatusForEntriesWithUUIDs:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)sharingEntryExistsWithPredicate:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
