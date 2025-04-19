@class NSDictionary, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncStateSyncShim : NSObject <HDCloudSyncStateSyncShimProtocol> {
    HDProfile *_profile;
    NSDictionary *_domainToEntityClassMapping;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)_createDomainToEntityMapping;
- (Class)_stateEntityForDomain:(id)a0;
- (void)mergeStateDataWithStore:(id)a0 domain:(id)a1 configuration:(id)a2 completion:(id /* block */)a3;
- (void)syncDidFinishWithResult:(BOOL)a0 domain:(id)a1 stateStore:(id)a2 completion:(id /* block */)a3;

@end
