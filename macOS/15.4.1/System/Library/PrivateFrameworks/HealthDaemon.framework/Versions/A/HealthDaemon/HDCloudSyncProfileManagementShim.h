@class HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncProfileManagementShim : NSObject <HDCloudSyncProfileManagementShimProtocol> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)createProfileForIdentifier:(id)a0 firstName:(id)a1 lastName:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
- (void)deleteAllProfilesOfType:(long long)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)deleteProfile:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)profileExistsForProfileIdentifier:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
